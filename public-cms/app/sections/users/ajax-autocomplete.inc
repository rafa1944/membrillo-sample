<?php
use angelrove\utils\CallApi;

$param_serch = $_GET['q'];

//----------------
// $result = array('success', 'success2', 'success3');
$urlAPI = API_ENVIROMENT.'/v2/public/users?filters[exclude_user]=8&search='.$param_serch;
$users = CallApi::call2AsObject('GET', $urlAPI, array());
// print_r2($users->data);

$result = array();
foreach ($users->data as $key => $data) {
    $result[] = '{label: "'.$data->fullname.'", value: '.$data->id.'}';
}
$result = implode(',', $result);

// Output ----------------
echo $_GET['callback'] . '(['. $result . ']);';

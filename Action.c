Action()
{   
	lr_debug_message(1, "k");
	
	lr_output_message("Iteration number: %d" , nIterationNumber++);
	
	lr_start_transaction ("TRXN01_SRL_Testing");
	
	lr_error_message("Param used: %s",lr_eval_string("{{P_MSISDN}}"));
	
	lr_error_message("Param used: %s",lr_eval_string("{{P_MSISDN}}"));
	
	lr_debug_message(0, "k");
	
	lr_end_transaction ("TRXN01_SRL_Testing", LR_AUTO);
	
	lr_start_transaction ("TRXN01_SRL_Testing_2");
	
	lr_error_message("Param used: %s",lr_eval_string("{{P_MSISDN}}"));
	
	lr_error_message("Param used: %s",lr_eval_string("{{P_MSISDN}}"));
	
	lr_debug_message(0, "k");
	
	lr_end_transaction ("TRXN01_SRL_Testing_2", LR_AUTO);
	
	lr_save_datetime("%m/%d/%Y %H:%M", DATE_NOW, "currDateTime");
    lr_output_message(lr_eval_string("{currDateTime}"));
	
	lr_think_time(120);
	
	return 0;
}

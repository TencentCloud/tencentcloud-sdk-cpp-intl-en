/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_SMS_V20210111_SMSCLIENT_H_
#define TENCENTCLOUD_SMS_V20210111_SMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sms/v20210111/model/AddSmsSignRequest.h>
#include <tencentcloud/sms/v20210111/model/AddSmsSignResponse.h>
#include <tencentcloud/sms/v20210111/model/AddSmsTemplateRequest.h>
#include <tencentcloud/sms/v20210111/model/AddSmsTemplateResponse.h>
#include <tencentcloud/sms/v20210111/model/CallbackStatusStatisticsRequest.h>
#include <tencentcloud/sms/v20210111/model/CallbackStatusStatisticsResponse.h>
#include <tencentcloud/sms/v20210111/model/DeleteSmsSignRequest.h>
#include <tencentcloud/sms/v20210111/model/DeleteSmsSignResponse.h>
#include <tencentcloud/sms/v20210111/model/DeleteSmsTemplateRequest.h>
#include <tencentcloud/sms/v20210111/model/DeleteSmsTemplateResponse.h>
#include <tencentcloud/sms/v20210111/model/DescribePhoneNumberInfoRequest.h>
#include <tencentcloud/sms/v20210111/model/DescribePhoneNumberInfoResponse.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsSignListRequest.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsSignListResponse.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsTemplateListRequest.h>
#include <tencentcloud/sms/v20210111/model/DescribeSmsTemplateListResponse.h>
#include <tencentcloud/sms/v20210111/model/ModifySmsSignRequest.h>
#include <tencentcloud/sms/v20210111/model/ModifySmsSignResponse.h>
#include <tencentcloud/sms/v20210111/model/ModifySmsTemplateRequest.h>
#include <tencentcloud/sms/v20210111/model/ModifySmsTemplateResponse.h>
#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusRequest.h>
#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusResponse.h>
#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusByPhoneNumberRequest.h>
#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusByPhoneNumberResponse.h>
#include <tencentcloud/sms/v20210111/model/PullSmsSendStatusRequest.h>
#include <tencentcloud/sms/v20210111/model/PullSmsSendStatusResponse.h>
#include <tencentcloud/sms/v20210111/model/PullSmsSendStatusByPhoneNumberRequest.h>
#include <tencentcloud/sms/v20210111/model/PullSmsSendStatusByPhoneNumberResponse.h>
#include <tencentcloud/sms/v20210111/model/ReportConversionRequest.h>
#include <tencentcloud/sms/v20210111/model/ReportConversionResponse.h>
#include <tencentcloud/sms/v20210111/model/SendSmsRequest.h>
#include <tencentcloud/sms/v20210111/model/SendSmsResponse.h>
#include <tencentcloud/sms/v20210111/model/SendStatusStatisticsRequest.h>
#include <tencentcloud/sms/v20210111/model/SendStatusStatisticsResponse.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            class SmsClient : public AbstractClient
            {
            public:
                SmsClient(const Credential &credential, const std::string &region);
                SmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddSmsSignResponse> AddSmsSignOutcome;
                typedef std::future<AddSmsSignOutcome> AddSmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::AddSmsSignRequest&, AddSmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsSignAsyncHandler;
                typedef Outcome<Core::Error, Model::AddSmsTemplateResponse> AddSmsTemplateOutcome;
                typedef std::future<AddSmsTemplateOutcome> AddSmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::AddSmsTemplateRequest&, AddSmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSmsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CallbackStatusStatisticsResponse> CallbackStatusStatisticsOutcome;
                typedef std::future<CallbackStatusStatisticsOutcome> CallbackStatusStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::CallbackStatusStatisticsRequest&, CallbackStatusStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallbackStatusStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmsSignResponse> DeleteSmsSignOutcome;
                typedef std::future<DeleteSmsSignOutcome> DeleteSmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DeleteSmsSignRequest&, DeleteSmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmsSignAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSmsTemplateResponse> DeleteSmsTemplateOutcome;
                typedef std::future<DeleteSmsTemplateOutcome> DeleteSmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DeleteSmsTemplateRequest&, DeleteSmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePhoneNumberInfoResponse> DescribePhoneNumberInfoOutcome;
                typedef std::future<DescribePhoneNumberInfoOutcome> DescribePhoneNumberInfoOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DescribePhoneNumberInfoRequest&, DescribePhoneNumberInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePhoneNumberInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmsSignListResponse> DescribeSmsSignListOutcome;
                typedef std::future<DescribeSmsSignListOutcome> DescribeSmsSignListOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DescribeSmsSignListRequest&, DescribeSmsSignListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsSignListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSmsTemplateListResponse> DescribeSmsTemplateListOutcome;
                typedef std::future<DescribeSmsTemplateListOutcome> DescribeSmsTemplateListOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::DescribeSmsTemplateListRequest&, DescribeSmsTemplateListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmsTemplateListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySmsSignResponse> ModifySmsSignOutcome;
                typedef std::future<ModifySmsSignOutcome> ModifySmsSignOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::ModifySmsSignRequest&, ModifySmsSignOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsSignAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySmsTemplateResponse> ModifySmsTemplateOutcome;
                typedef std::future<ModifySmsTemplateOutcome> ModifySmsTemplateOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::ModifySmsTemplateRequest&, ModifySmsTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmsTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::PullSmsReplyStatusResponse> PullSmsReplyStatusOutcome;
                typedef std::future<PullSmsReplyStatusOutcome> PullSmsReplyStatusOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsReplyStatusRequest&, PullSmsReplyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsReplyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::PullSmsReplyStatusByPhoneNumberResponse> PullSmsReplyStatusByPhoneNumberOutcome;
                typedef std::future<PullSmsReplyStatusByPhoneNumberOutcome> PullSmsReplyStatusByPhoneNumberOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsReplyStatusByPhoneNumberRequest&, PullSmsReplyStatusByPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsReplyStatusByPhoneNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::PullSmsSendStatusResponse> PullSmsSendStatusOutcome;
                typedef std::future<PullSmsSendStatusOutcome> PullSmsSendStatusOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsSendStatusRequest&, PullSmsSendStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsSendStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::PullSmsSendStatusByPhoneNumberResponse> PullSmsSendStatusByPhoneNumberOutcome;
                typedef std::future<PullSmsSendStatusByPhoneNumberOutcome> PullSmsSendStatusByPhoneNumberOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::PullSmsSendStatusByPhoneNumberRequest&, PullSmsSendStatusByPhoneNumberOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PullSmsSendStatusByPhoneNumberAsyncHandler;
                typedef Outcome<Core::Error, Model::ReportConversionResponse> ReportConversionOutcome;
                typedef std::future<ReportConversionOutcome> ReportConversionOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::ReportConversionRequest&, ReportConversionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportConversionAsyncHandler;
                typedef Outcome<Core::Error, Model::SendSmsResponse> SendSmsOutcome;
                typedef std::future<SendSmsOutcome> SendSmsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SendSmsRequest&, SendSmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsAsyncHandler;
                typedef Outcome<Core::Error, Model::SendStatusStatisticsResponse> SendStatusStatisticsOutcome;
                typedef std::future<SendStatusStatisticsOutcome> SendStatusStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SendStatusStatisticsRequest&, SendStatusStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendStatusStatisticsAsyncHandler;



                /**
                 *1. This API is used to add an SMS signature. You need to read the [Tencent Cloud SMS Signature Review Standards](https://intl.cloud.tencent.com/zh/document/product/382/40658) before starting an application.
2. ⚠️ Note: individual users cannot use this API to apply for SMS signatures. For more information, see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). If your account identity is individual, you can log in to the console to apply for SMS signatures.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.
                 * @param req AddSmsSignRequest
                 * @return AddSmsSignOutcome
                 */
                AddSmsSignOutcome AddSmsSign(const Model::AddSmsSignRequest &request);
                void AddSmsSignAsync(const Model::AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsSignOutcomeCallable AddSmsSignCallable(const Model::AddSmsSignRequest& request);

                /**
                 *1. This API is used to add an SMS template. You need to read the [Tencent Cloud SMS Body Template Review Standards](https://intl.cloud.tencent.com/zh/document/product/382/40659) before starting an application.
2. ⚠️ Note: individual users cannot use this API to apply for SMS body templates. For more information, see [Identity Verification Overview](https://intl.cloud.tencent.com/zh/document/product/378/3629). If your account identity is individual, you can log in to the [console](https://console.cloud.tencent.com/smsv2) to apply for SMS body templates.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.
                 * @param req AddSmsTemplateRequest
                 * @return AddSmsTemplateOutcome
                 */
                AddSmsTemplateOutcome AddSmsTemplate(const Model::AddSmsTemplateRequest &request);
                void AddSmsTemplateAsync(const Model::AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsTemplateOutcomeCallable AddSmsTemplateCallable(const Model::AddSmsTemplateRequest& request);

                /**
                 *This API is used to collect statistics on user receipts.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.
                 * @param req CallbackStatusStatisticsRequest
                 * @return CallbackStatusStatisticsOutcome
                 */
                CallbackStatusStatisticsOutcome CallbackStatusStatistics(const Model::CallbackStatusStatisticsRequest &request);
                void CallbackStatusStatisticsAsync(const Model::CallbackStatusStatisticsRequest& request, const CallbackStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallbackStatusStatisticsOutcomeCallable CallbackStatusStatisticsCallable(const Model::CallbackStatusStatisticsRequest& request);

                /**
                 *⚠️ Note: individual users cannot use this API to delete SMS signatures. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). Please log in to the [console](https://console.cloud.tencent.com/smsv2) to delete SMS signatures.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.
                 * @param req DeleteSmsSignRequest
                 * @return DeleteSmsSignOutcome
                 */
                DeleteSmsSignOutcome DeleteSmsSign(const Model::DeleteSmsSignRequest &request);
                void DeleteSmsSignAsync(const Model::DeleteSmsSignRequest& request, const DeleteSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmsSignOutcomeCallable DeleteSmsSignCallable(const Model::DeleteSmsSignRequest& request);

                /**
                 *⚠️ Note: individual users cannot use this API to delete SMS body templates. Please log in to the [console](https://console.cloud.tencent.com/smsv2) to do so. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1).
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.
                 * @param req DeleteSmsTemplateRequest
                 * @return DeleteSmsTemplateOutcome
                 */
                DeleteSmsTemplateOutcome DeleteSmsTemplate(const Model::DeleteSmsTemplateRequest &request);
                void DeleteSmsTemplateAsync(const Model::DeleteSmsTemplateRequest& request, const DeleteSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmsTemplateOutcomeCallable DeleteSmsTemplateCallable(const Model::DeleteSmsTemplateRequest& request);

                /**
                 *This API is used to query the information of a phone number, including country/region code and standardized E.164 format number.
>- For example, if you query the number +86018845720123, you can get the country/region code 86 and the standardized E.164 number +8618845720123.
                 * @param req DescribePhoneNumberInfoRequest
                 * @return DescribePhoneNumberInfoOutcome
                 */
                DescribePhoneNumberInfoOutcome DescribePhoneNumberInfo(const Model::DescribePhoneNumberInfoRequest &request);
                void DescribePhoneNumberInfoAsync(const Model::DescribePhoneNumberInfoRequest& request, const DescribePhoneNumberInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePhoneNumberInfoOutcomeCallable DescribePhoneNumberInfoCallable(const Model::DescribePhoneNumberInfoRequest& request);

                /**
                 *⚠️ Note: individual users cannot use this API to query SMS signatures. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). If your account identity is individual, you can log in to the [console](https://console.cloud.tencent.com/smsv2) to query SMS signatures.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.

                 * @param req DescribeSmsSignListRequest
                 * @return DescribeSmsSignListOutcome
                 */
                DescribeSmsSignListOutcome DescribeSmsSignList(const Model::DescribeSmsSignListRequest &request);
                void DescribeSmsSignListAsync(const Model::DescribeSmsSignListRequest& request, const DescribeSmsSignListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsSignListOutcomeCallable DescribeSmsSignListCallable(const Model::DescribeSmsSignListRequest& request);

                /**
                 *⚠️ Note: individual users cannot use this API to query SMS body templates. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1).
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.

                 * @param req DescribeSmsTemplateListRequest
                 * @return DescribeSmsTemplateListOutcome
                 */
                DescribeSmsTemplateListOutcome DescribeSmsTemplateList(const Model::DescribeSmsTemplateListRequest &request);
                void DescribeSmsTemplateListAsync(const Model::DescribeSmsTemplateListRequest& request, const DescribeSmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsTemplateListOutcomeCallable DescribeSmsTemplateListCallable(const Model::DescribeSmsTemplateListRequest& request);

                /**
                 *1. This API is used to modify an SMS signature. Read the [Tencent Cloud SMS signature review standards](https://intl.cloud.tencent.com/document/product/382/40658) before making a modification.
2. ⚠️ Note: Individual users cannot use this API to modify SMS signatures. For more information, see [Identity Verification Guide](https://intl.cloud.tencent.com/document/product/378/3629). If your account identity is individual, you can log in to the [console](https://console.cloud.tencent.com/smsv2) to modify SMS signatures.
3. Modifications can be made only if the signature status is **Pending Review** or **Rejected**. **Approved** signatures cannot be modified.
>- Note: Because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.
                 * @param req ModifySmsSignRequest
                 * @return ModifySmsSignOutcome
                 */
                ModifySmsSignOutcome ModifySmsSign(const Model::ModifySmsSignRequest &request);
                void ModifySmsSignAsync(const Model::ModifySmsSignRequest& request, const ModifySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsSignOutcomeCallable ModifySmsSignCallable(const Model::ModifySmsSignRequest& request);

                /**
                 *1. This API is used to modify an SMS body template. Please read the [Tencent Cloud SMS Body Template Review Standards](https://intl.cloud.tencent.com/document/product/382/39023?from_cn_redirect=1) before making a modification.
2. ⚠️ Note: individual users cannot use this API to modify SMS body templates. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). If your account identity is individual, you can log in to the [console](https://console.cloud.tencent.com/smsv2) to modify SMS body templates.
3. Modifications can be made only if the body template status is **Pending Review** or **Rejected**. **Approved** body templates cannot be modified.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2019-07-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.

                 * @param req ModifySmsTemplateRequest
                 * @return ModifySmsTemplateOutcome
                 */
                ModifySmsTemplateOutcome ModifySmsTemplate(const Model::ModifySmsTemplateRequest &request);
                void ModifySmsTemplateAsync(const Model::ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsTemplateOutcomeCallable ModifySmsTemplateCallable(const Model::ModifySmsTemplateRequest& request);

                /**
                 *This API is used to pull SMS reply status.
Currently, you can also [configure the reply callback](https://intl.cloud.tencent.com/document/product/382/42907?from_cn_redirect=1) to get replies.
>- Note: You need to contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81) to activate this API.
>- Note: Because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.

                 * @param req PullSmsReplyStatusRequest
                 * @return PullSmsReplyStatusOutcome
                 */
                PullSmsReplyStatusOutcome PullSmsReplyStatus(const Model::PullSmsReplyStatusRequest &request);
                void PullSmsReplyStatusAsync(const Model::PullSmsReplyStatusRequest& request, const PullSmsReplyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsReplyStatusOutcomeCallable PullSmsReplyStatusCallable(const Model::PullSmsReplyStatusRequest& request);

                /**
                 *This API is used to pull SMS reply status for one single number.
Currently, you can also [configure the reply callback](https://intl.cloud.tencent.com/document/product/382/42907?from_cn_redirect=1) to get replies.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.

                 * @param req PullSmsReplyStatusByPhoneNumberRequest
                 * @return PullSmsReplyStatusByPhoneNumberOutcome
                 */
                PullSmsReplyStatusByPhoneNumberOutcome PullSmsReplyStatusByPhoneNumber(const Model::PullSmsReplyStatusByPhoneNumberRequest &request);
                void PullSmsReplyStatusByPhoneNumberAsync(const Model::PullSmsReplyStatusByPhoneNumberRequest& request, const PullSmsReplyStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsReplyStatusByPhoneNumberOutcomeCallable PullSmsReplyStatusByPhoneNumberCallable(const Model::PullSmsReplyStatusByPhoneNumberRequest& request);

                /**
                 *This API is used to pull SMS delivery status.
Currently, you can also [configure the callback](https://intl.cloud.tencent.com/document/product/382/37809?from_cn_redirect=1#.E8.AE.BE.E7.BD.AE.E4.BA.8B.E4.BB.B6.E5.9B.9E.E8.B0.83.E9.85.8D.E7.BD.AE) to get the delivery status.
>- Note: you need to contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81) to activate this API.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.

                 * @param req PullSmsSendStatusRequest
                 * @return PullSmsSendStatusOutcome
                 */
                PullSmsSendStatusOutcome PullSmsSendStatus(const Model::PullSmsSendStatusRequest &request);
                void PullSmsSendStatusAsync(const Model::PullSmsSendStatusRequest& request, const PullSmsSendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsSendStatusOutcomeCallable PullSmsSendStatusCallable(const Model::PullSmsSendStatusRequest& request);

                /**
                 *This API is used to pull SMS delivery status for one single number.
Currently, you can also [configure the callback](https://intl.cloud.tencent.com/document/product/382/37809?from_cn_redirect=1#.E8.AE.BE.E7.BD.AE.E4.BA.8B.E4.BB.B6.E5.9B.9E.E8.B0.83.E9.85.8D.E7.BD.AE) to get the delivery status.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms) to eliminate the need to calculate signatures. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.

                 * @param req PullSmsSendStatusByPhoneNumberRequest
                 * @return PullSmsSendStatusByPhoneNumberOutcome
                 */
                PullSmsSendStatusByPhoneNumberOutcome PullSmsSendStatusByPhoneNumber(const Model::PullSmsSendStatusByPhoneNumberRequest &request);
                void PullSmsSendStatusByPhoneNumberAsync(const Model::PullSmsSendStatusByPhoneNumberRequest& request, const PullSmsSendStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsSendStatusByPhoneNumberOutcomeCallable PullSmsSendStatusByPhoneNumberCallable(const Model::PullSmsSendStatusByPhoneNumberRequest& request);

                /**
                 *This API is used to report the SMS conversion rate (SMS conversion rate = the number of returned verification codes / the number of verification codes sent) and report the serial numbers of received SMS messages to Tencent Cloud SMS.
>- Note: To call this API, you need to be added to the allowlist first. If you have any questions, contact [SMS Helper](https://intl.cloud.tencent.com/document/product/382/3773?from_cn_redirect=1#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81).
                 * @param req ReportConversionRequest
                 * @return ReportConversionOutcome
                 */
                ReportConversionOutcome ReportConversion(const Model::ReportConversionRequest &request);
                void ReportConversionAsync(const Model::ReportConversionRequest& request, const ReportConversionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportConversionOutcomeCallable ReportConversionCallable(const Model::ReportConversionRequest& request);

                /**
                 *This API is used to send SMS verification codes, notification, or marketing messages to users.
>- Note: Because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the [SDK](https://intl.cloud.tencent.com/document/product/382/43193?from_cn_redirect=1).
>- Note: You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.
                 * @param req SendSmsRequest
                 * @return SendSmsOutcome
                 */
                SendSmsOutcome SendSms(const Model::SendSmsRequest &request);
                void SendSmsAsync(const Model::SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendSmsOutcomeCallable SendSmsCallable(const Model::SendSmsRequest& request);

                /**
                 *This API is used to collect statistics on SMS messages sent by users.
>- Note: because of the improved security of **TencentCloud API 3.0**, **API authentication** is more complicated. We recommend you use the Tencent Cloud SMS service with the SDK.
>- You can run this API directly in [API 3.0 Explorer](https://console.cloud.tencent.com/api/explorer?Product=sms&Version=2021-01-11&Action=SendSms), which eliminates the signature calculation steps. After it is executed successfully, API Explorer can **automatically generate** SDK code samples.

                 * @param req SendStatusStatisticsRequest
                 * @return SendStatusStatisticsOutcome
                 */
                SendStatusStatisticsOutcome SendStatusStatistics(const Model::SendStatusStatisticsRequest &request);
                void SendStatusStatisticsAsync(const Model::SendStatusStatisticsRequest& request, const SendStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendStatusStatisticsOutcomeCallable SendStatusStatisticsCallable(const Model::SendStatusStatisticsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_SMSCLIENT_H_

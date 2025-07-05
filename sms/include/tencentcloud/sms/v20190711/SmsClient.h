/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_SMS_V20190711_SMSCLIENT_H_
#define TENCENTCLOUD_SMS_V20190711_SMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/sms/v20190711/model/AddSmsSignRequest.h>
#include <tencentcloud/sms/v20190711/model/AddSmsSignResponse.h>
#include <tencentcloud/sms/v20190711/model/AddSmsTemplateRequest.h>
#include <tencentcloud/sms/v20190711/model/AddSmsTemplateResponse.h>
#include <tencentcloud/sms/v20190711/model/CallbackStatusStatisticsRequest.h>
#include <tencentcloud/sms/v20190711/model/CallbackStatusStatisticsResponse.h>
#include <tencentcloud/sms/v20190711/model/DeleteSmsSignRequest.h>
#include <tencentcloud/sms/v20190711/model/DeleteSmsSignResponse.h>
#include <tencentcloud/sms/v20190711/model/DeleteSmsTemplateRequest.h>
#include <tencentcloud/sms/v20190711/model/DeleteSmsTemplateResponse.h>
#include <tencentcloud/sms/v20190711/model/DescribeSmsSignListRequest.h>
#include <tencentcloud/sms/v20190711/model/DescribeSmsSignListResponse.h>
#include <tencentcloud/sms/v20190711/model/DescribeSmsTemplateListRequest.h>
#include <tencentcloud/sms/v20190711/model/DescribeSmsTemplateListResponse.h>
#include <tencentcloud/sms/v20190711/model/ModifySmsSignRequest.h>
#include <tencentcloud/sms/v20190711/model/ModifySmsSignResponse.h>
#include <tencentcloud/sms/v20190711/model/ModifySmsTemplateRequest.h>
#include <tencentcloud/sms/v20190711/model/ModifySmsTemplateResponse.h>
#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatusRequest.h>
#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatusResponse.h>
#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatusByPhoneNumberRequest.h>
#include <tencentcloud/sms/v20190711/model/PullSmsReplyStatusByPhoneNumberResponse.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusRequest.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusResponse.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberRequest.h>
#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberResponse.h>
#include <tencentcloud/sms/v20190711/model/SendSmsRequest.h>
#include <tencentcloud/sms/v20190711/model/SendSmsResponse.h>
#include <tencentcloud/sms/v20190711/model/SendStatusStatisticsRequest.h>
#include <tencentcloud/sms/v20190711/model/SendStatusStatisticsResponse.h>
#include <tencentcloud/sms/v20190711/model/SmsPackagesStatisticsRequest.h>
#include <tencentcloud/sms/v20190711/model/SmsPackagesStatisticsResponse.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
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
                typedef Outcome<Core::Error, Model::SendSmsResponse> SendSmsOutcome;
                typedef std::future<SendSmsOutcome> SendSmsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SendSmsRequest&, SendSmsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendSmsAsyncHandler;
                typedef Outcome<Core::Error, Model::SendStatusStatisticsResponse> SendStatusStatisticsOutcome;
                typedef std::future<SendStatusStatisticsOutcome> SendStatusStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SendStatusStatisticsRequest&, SendStatusStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendStatusStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::SmsPackagesStatisticsResponse> SmsPackagesStatisticsOutcome;
                typedef std::future<SmsPackagesStatisticsOutcome> SmsPackagesStatisticsOutcomeCallable;
                typedef std::function<void(const SmsClient*, const Model::SmsPackagesStatisticsRequest&, SmsPackagesStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SmsPackagesStatisticsAsyncHandler;



                /**
                 *This API is used to add an SMS signature. Please read the [Tencent Cloud SMS Signature Review Standards](https://intl.cloud.tencent.com/document/product/382/39022?from_cn_redirect=1) before starting an application.
> Note: individual users cannot use this API to apply for SMS signatures. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). If your account identity is individual, please log in to the console to apply for SMS signatures. For detailed directions, please see [Creating SMS Signatures](https://intl.cloud.tencent.com/document/product/382/36136?from_cn_redirect=1#Sign).
                 * @param req AddSmsSignRequest
                 * @return AddSmsSignOutcome
                 */
                AddSmsSignOutcome AddSmsSign(const Model::AddSmsSignRequest &request);
                void AddSmsSignAsync(const Model::AddSmsSignRequest& request, const AddSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsSignOutcomeCallable AddSmsSignCallable(const Model::AddSmsSignRequest& request);

                /**
                 *This API is used to add an SMS template. Please read the [Tencent Cloud SMS Body Template Review Standards](https://intl.cloud.tencent.com/document/product/382/39023?from_cn_redirect=1) before starting an application.
> Note: individual users cannot use this API to apply for SMS body templates. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). If your account identity is individual, please log in to the console to apply for SMS body templates. For detailed directions, please see [Creating SMS Body Templates](https://intl.cloud.tencent.com/document/product/382/36136?from_cn_redirect=1#Template).
                 * @param req AddSmsTemplateRequest
                 * @return AddSmsTemplateOutcome
                 */
                AddSmsTemplateOutcome AddSmsTemplate(const Model::AddSmsTemplateRequest &request);
                void AddSmsTemplateAsync(const Model::AddSmsTemplateRequest& request, const AddSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSmsTemplateOutcomeCallable AddSmsTemplateCallable(const Model::AddSmsTemplateRequest& request);

                /**
                 *This API is used to collect statistics on user receipts.
                 * @param req CallbackStatusStatisticsRequest
                 * @return CallbackStatusStatisticsOutcome
                 */
                CallbackStatusStatisticsOutcome CallbackStatusStatistics(const Model::CallbackStatusStatisticsRequest &request);
                void CallbackStatusStatisticsAsync(const Model::CallbackStatusStatisticsRequest& request, const CallbackStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallbackStatusStatisticsOutcomeCallable CallbackStatusStatisticsCallable(const Model::CallbackStatusStatisticsRequest& request);

                /**
                 *> Note: individual users cannot use this API to delete SMS signatures. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). You can log in to the console to delete SMS signatures. For detailed directions, please see the notes on deleting SMS signatures in [SMS Signature Operations](https://intl.cloud.tencent.com/document/product/382/36136?from_cn_redirect=1#Sign).
                 * @param req DeleteSmsSignRequest
                 * @return DeleteSmsSignOutcome
                 */
                DeleteSmsSignOutcome DeleteSmsSign(const Model::DeleteSmsSignRequest &request);
                void DeleteSmsSignAsync(const Model::DeleteSmsSignRequest& request, const DeleteSmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmsSignOutcomeCallable DeleteSmsSignCallable(const Model::DeleteSmsSignRequest& request);

                /**
                 *> Note: individual users cannot use this API to delete SMS body templates. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). You can log in to the console to delete SMS body templates. For detailed directions, please see the notes on deleting SMS body templates in [SMS Body Template Operations](https://intl.cloud.tencent.com/document/product/382/36136?from_cn_redirect=1#Template).
                 * @param req DeleteSmsTemplateRequest
                 * @return DeleteSmsTemplateOutcome
                 */
                DeleteSmsTemplateOutcome DeleteSmsTemplate(const Model::DeleteSmsTemplateRequest &request);
                void DeleteSmsTemplateAsync(const Model::DeleteSmsTemplateRequest& request, const DeleteSmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSmsTemplateOutcomeCallable DeleteSmsTemplateCallable(const Model::DeleteSmsTemplateRequest& request);

                /**
                 *> Note: individual users cannot use this API to query SMS signatures. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1).
                 * @param req DescribeSmsSignListRequest
                 * @return DescribeSmsSignListOutcome
                 */
                DescribeSmsSignListOutcome DescribeSmsSignList(const Model::DescribeSmsSignListRequest &request);
                void DescribeSmsSignListAsync(const Model::DescribeSmsSignListRequest& request, const DescribeSmsSignListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsSignListOutcomeCallable DescribeSmsSignListCallable(const Model::DescribeSmsSignListRequest& request);

                /**
                 *> Note: individual users cannot use this API to query SMS body templates. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1).
                 * @param req DescribeSmsTemplateListRequest
                 * @return DescribeSmsTemplateListOutcome
                 */
                DescribeSmsTemplateListOutcome DescribeSmsTemplateList(const Model::DescribeSmsTemplateListRequest &request);
                void DescribeSmsTemplateListAsync(const Model::DescribeSmsTemplateListRequest& request, const DescribeSmsTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSmsTemplateListOutcomeCallable DescribeSmsTemplateListCallable(const Model::DescribeSmsTemplateListRequest& request);

                /**
                 *This API is used to modify an SMS signature. Please read the [Tencent Cloud SMS Signature Review Standards](https://intl.cloud.tencent.com/document/product/382/39022?from_cn_redirect=1) before making a modification.
>-  Note: individual users cannot use this API to modify SMS signatures. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). If your account identity is individual, you can log in to the console to modify SMS signatures.
>- Modifications can be made only if the signature status is **pending review** or **rejected**. **Approved** signatures cannot be modified.
                 * @param req ModifySmsSignRequest
                 * @return ModifySmsSignOutcome
                 */
                ModifySmsSignOutcome ModifySmsSign(const Model::ModifySmsSignRequest &request);
                void ModifySmsSignAsync(const Model::ModifySmsSignRequest& request, const ModifySmsSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsSignOutcomeCallable ModifySmsSignCallable(const Model::ModifySmsSignRequest& request);

                /**
                 *This API is used to modify an SMS body template. Please read the [Tencent Cloud SMS Body Template Review Standards](https://intl.cloud.tencent.com/document/product/382/39023?from_cn_redirect=1) before making a modification.
>-  Note: individual users cannot use this API to modify SMS body templates. For more information, please see [Identity Verification Overview](https://intl.cloud.tencent.com/document/product/378/3629?from_cn_redirect=1). If your account identity is individual, you can log in to the console to modify SMS body templates.
>- Modifications can be made only if the body template status is **pending review** or **rejected**. **Approved** body templates cannot be modified.
                 * @param req ModifySmsTemplateRequest
                 * @return ModifySmsTemplateOutcome
                 */
                ModifySmsTemplateOutcome ModifySmsTemplate(const Model::ModifySmsTemplateRequest &request);
                void ModifySmsTemplateAsync(const Model::ModifySmsTemplateRequest& request, const ModifySmsTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySmsTemplateOutcomeCallable ModifySmsTemplateCallable(const Model::ModifySmsTemplateRequest& request);

                /**
                 *This API is used to pull SMS reply status.
                 * @param req PullSmsReplyStatusRequest
                 * @return PullSmsReplyStatusOutcome
                 */
                PullSmsReplyStatusOutcome PullSmsReplyStatus(const Model::PullSmsReplyStatusRequest &request);
                void PullSmsReplyStatusAsync(const Model::PullSmsReplyStatusRequest& request, const PullSmsReplyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsReplyStatusOutcomeCallable PullSmsReplyStatusCallable(const Model::PullSmsReplyStatusRequest& request);

                /**
                 *This API is used to pull SMS reply status for one single number.
                 * @param req PullSmsReplyStatusByPhoneNumberRequest
                 * @return PullSmsReplyStatusByPhoneNumberOutcome
                 */
                PullSmsReplyStatusByPhoneNumberOutcome PullSmsReplyStatusByPhoneNumber(const Model::PullSmsReplyStatusByPhoneNumberRequest &request);
                void PullSmsReplyStatusByPhoneNumberAsync(const Model::PullSmsReplyStatusByPhoneNumberRequest& request, const PullSmsReplyStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsReplyStatusByPhoneNumberOutcomeCallable PullSmsReplyStatusByPhoneNumberCallable(const Model::PullSmsReplyStatusByPhoneNumberRequest& request);

                /**
                 *This API is used to pull SMS delivery status.
                 * @param req PullSmsSendStatusRequest
                 * @return PullSmsSendStatusOutcome
                 */
                PullSmsSendStatusOutcome PullSmsSendStatus(const Model::PullSmsSendStatusRequest &request);
                void PullSmsSendStatusAsync(const Model::PullSmsSendStatusRequest& request, const PullSmsSendStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsSendStatusOutcomeCallable PullSmsSendStatusCallable(const Model::PullSmsSendStatusRequest& request);

                /**
                 *This API is used to pull SMS delivery status for one single number.
                 * @param req PullSmsSendStatusByPhoneNumberRequest
                 * @return PullSmsSendStatusByPhoneNumberOutcome
                 */
                PullSmsSendStatusByPhoneNumberOutcome PullSmsSendStatusByPhoneNumber(const Model::PullSmsSendStatusByPhoneNumberRequest &request);
                void PullSmsSendStatusByPhoneNumberAsync(const Model::PullSmsSendStatusByPhoneNumberRequest& request, const PullSmsSendStatusByPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PullSmsSendStatusByPhoneNumberOutcomeCallable PullSmsSendStatusByPhoneNumberCallable(const Model::PullSmsSendStatusByPhoneNumberRequest& request);

                /**
                 *This API is used to send SMS verification codes, notification, or marketing messages to users.


                 * @param req SendSmsRequest
                 * @return SendSmsOutcome
                 */
                SendSmsOutcome SendSms(const Model::SendSmsRequest &request);
                void SendSmsAsync(const Model::SendSmsRequest& request, const SendSmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendSmsOutcomeCallable SendSmsCallable(const Model::SendSmsRequest& request);

                /**
                 *This API is used to collect statistics on SMS sent by users.
                 * @param req SendStatusStatisticsRequest
                 * @return SendStatusStatisticsOutcome
                 */
                SendStatusStatisticsOutcome SendStatusStatistics(const Model::SendStatusStatisticsRequest &request);
                void SendStatusStatisticsAsync(const Model::SendStatusStatisticsRequest& request, const SendStatusStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendStatusStatisticsOutcomeCallable SendStatusStatisticsCallable(const Model::SendStatusStatisticsRequest& request);

                /**
                 *This API is used to collect statistics on user's packages.
                 * @param req SmsPackagesStatisticsRequest
                 * @return SmsPackagesStatisticsOutcome
                 */
                SmsPackagesStatisticsOutcome SmsPackagesStatistics(const Model::SmsPackagesStatisticsRequest &request);
                void SmsPackagesStatisticsAsync(const Model::SmsPackagesStatisticsRequest& request, const SmsPackagesStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SmsPackagesStatisticsOutcomeCallable SmsPackagesStatisticsCallable(const Model::SmsPackagesStatisticsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_SMSCLIENT_H_

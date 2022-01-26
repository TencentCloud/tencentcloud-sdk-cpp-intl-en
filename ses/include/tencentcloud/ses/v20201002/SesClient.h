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

#ifndef TENCENTCLOUD_SES_V20201002_SESCLIENT_H_
#define TENCENTCLOUD_SES_V20201002_SESCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ses/v20201002/model/BatchSendEmailRequest.h>
#include <tencentcloud/ses/v20201002/model/BatchSendEmailResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverResponse.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverDetailRequest.h>
#include <tencentcloud/ses/v20201002/model/CreateReceiverDetailResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteBlackListRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteBlackListResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/DeleteEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/GetEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/GetEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/GetEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/GetEmailTemplateResponse.h>
#include <tencentcloud/ses/v20201002/model/GetSendEmailStatusRequest.h>
#include <tencentcloud/ses/v20201002/model/GetSendEmailStatusResponse.h>
#include <tencentcloud/ses/v20201002/model/GetStatisticsReportRequest.h>
#include <tencentcloud/ses/v20201002/model/GetStatisticsReportResponse.h>
#include <tencentcloud/ses/v20201002/model/ListBlackEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/ListBlackEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailAddressRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailAddressResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailIdentitiesRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailIdentitiesResponse.h>
#include <tencentcloud/ses/v20201002/model/ListEmailTemplatesRequest.h>
#include <tencentcloud/ses/v20201002/model/ListEmailTemplatesResponse.h>
#include <tencentcloud/ses/v20201002/model/ListReceiversRequest.h>
#include <tencentcloud/ses/v20201002/model/ListReceiversResponse.h>
#include <tencentcloud/ses/v20201002/model/ListSendTasksRequest.h>
#include <tencentcloud/ses/v20201002/model/ListSendTasksResponse.h>
#include <tencentcloud/ses/v20201002/model/SendEmailRequest.h>
#include <tencentcloud/ses/v20201002/model/SendEmailResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailIdentityRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailIdentityResponse.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailTemplateRequest.h>
#include <tencentcloud/ses/v20201002/model/UpdateEmailTemplateResponse.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            class SesClient : public AbstractClient
            {
            public:
                SesClient(const Credential &credential, const std::string &region);
                SesClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BatchSendEmailResponse> BatchSendEmailOutcome;
                typedef std::future<BatchSendEmailOutcome> BatchSendEmailOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::BatchSendEmailRequest&, BatchSendEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchSendEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmailAddressResponse> CreateEmailAddressOutcome;
                typedef std::future<CreateEmailAddressOutcome> CreateEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailAddressRequest&, CreateEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmailIdentityResponse> CreateEmailIdentityOutcome;
                typedef std::future<CreateEmailIdentityOutcome> CreateEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailIdentityRequest&, CreateEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEmailTemplateResponse> CreateEmailTemplateOutcome;
                typedef std::future<CreateEmailTemplateOutcome> CreateEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateEmailTemplateRequest&, CreateEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEmailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReceiverResponse> CreateReceiverOutcome;
                typedef std::future<CreateReceiverOutcome> CreateReceiverOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateReceiverRequest&, CreateReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateReceiverDetailResponse> CreateReceiverDetailOutcome;
                typedef std::future<CreateReceiverDetailOutcome> CreateReceiverDetailOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::CreateReceiverDetailRequest&, CreateReceiverDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateReceiverDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBlackListResponse> DeleteBlackListOutcome;
                typedef std::future<DeleteBlackListOutcome> DeleteBlackListOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteBlackListRequest&, DeleteBlackListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBlackListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEmailAddressResponse> DeleteEmailAddressOutcome;
                typedef std::future<DeleteEmailAddressOutcome> DeleteEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailAddressRequest&, DeleteEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEmailIdentityResponse> DeleteEmailIdentityOutcome;
                typedef std::future<DeleteEmailIdentityOutcome> DeleteEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailIdentityRequest&, DeleteEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEmailTemplateResponse> DeleteEmailTemplateOutcome;
                typedef std::future<DeleteEmailTemplateOutcome> DeleteEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::DeleteEmailTemplateRequest&, DeleteEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEmailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEmailIdentityResponse> GetEmailIdentityOutcome;
                typedef std::future<GetEmailIdentityOutcome> GetEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetEmailIdentityRequest&, GetEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmailIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::GetEmailTemplateResponse> GetEmailTemplateOutcome;
                typedef std::future<GetEmailTemplateOutcome> GetEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetEmailTemplateRequest&, GetEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetEmailTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::GetSendEmailStatusResponse> GetSendEmailStatusOutcome;
                typedef std::future<GetSendEmailStatusOutcome> GetSendEmailStatusOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetSendEmailStatusRequest&, GetSendEmailStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetSendEmailStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetStatisticsReportResponse> GetStatisticsReportOutcome;
                typedef std::future<GetStatisticsReportOutcome> GetStatisticsReportOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::GetStatisticsReportRequest&, GetStatisticsReportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticsReportAsyncHandler;
                typedef Outcome<Core::Error, Model::ListBlackEmailAddressResponse> ListBlackEmailAddressOutcome;
                typedef std::future<ListBlackEmailAddressOutcome> ListBlackEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListBlackEmailAddressRequest&, ListBlackEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListBlackEmailAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEmailAddressResponse> ListEmailAddressOutcome;
                typedef std::future<ListEmailAddressOutcome> ListEmailAddressOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailAddressRequest&, ListEmailAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEmailIdentitiesResponse> ListEmailIdentitiesOutcome;
                typedef std::future<ListEmailIdentitiesOutcome> ListEmailIdentitiesOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailIdentitiesRequest&, ListEmailIdentitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailIdentitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEmailTemplatesResponse> ListEmailTemplatesOutcome;
                typedef std::future<ListEmailTemplatesOutcome> ListEmailTemplatesOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListEmailTemplatesRequest&, ListEmailTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEmailTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListReceiversResponse> ListReceiversOutcome;
                typedef std::future<ListReceiversOutcome> ListReceiversOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListReceiversRequest&, ListReceiversOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListReceiversAsyncHandler;
                typedef Outcome<Core::Error, Model::ListSendTasksResponse> ListSendTasksOutcome;
                typedef std::future<ListSendTasksOutcome> ListSendTasksOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::ListSendTasksRequest&, ListSendTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListSendTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::SendEmailResponse> SendEmailOutcome;
                typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::SendEmailRequest&, SendEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEmailIdentityResponse> UpdateEmailIdentityOutcome;
                typedef std::future<UpdateEmailIdentityOutcome> UpdateEmailIdentityOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateEmailIdentityRequest&, UpdateEmailIdentityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEmailIdentityAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEmailTemplateResponse> UpdateEmailTemplateOutcome;
                typedef std::future<UpdateEmailTemplateOutcome> UpdateEmailTemplateOutcomeCallable;
                typedef std::function<void(const SesClient*, const Model::UpdateEmailTemplateRequest&, UpdateEmailTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEmailTemplateAsyncHandler;



                /**
                 *This API is used to send a TEXT or HTML email to multiple recipients at a time for marketing or notification purposes. By default, you can send emails using a template only. To send custom content, please contact your sales rep to enable this feature. You need to create a recipient group with email addresses first and then send emails by group ID. SES supports scheduled and recurring email sending tasks. You need to pass in `TimedParam` for a scheduled task and `CycleParam` for a recurring one.
                 * @param req BatchSendEmailRequest
                 * @return BatchSendEmailOutcome
                 */
                BatchSendEmailOutcome BatchSendEmail(const Model::BatchSendEmailRequest &request);
                void BatchSendEmailAsync(const Model::BatchSendEmailRequest& request, const BatchSendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchSendEmailOutcomeCallable BatchSendEmailCallable(const Model::BatchSendEmailRequest& request);

                /**
                 *After the sender domain is verified, you need a sender address to send emails. For example, if your sender domain is mail.qcloud.com, your sender address can be service@mail.qcloud.com. If you want to display your name (such as "Tencent Cloud") in the inbox list of the recipients, the sender address should be in the format of `Tencent Cloud <email address>`. Please note that there must be a space between your name and the first angle bracket.
                 * @param req CreateEmailAddressRequest
                 * @return CreateEmailAddressOutcome
                 */
                CreateEmailAddressOutcome CreateEmailAddress(const Model::CreateEmailAddressRequest &request);
                void CreateEmailAddressAsync(const Model::CreateEmailAddressRequest& request, const CreateEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailAddressOutcomeCallable CreateEmailAddressCallable(const Model::CreateEmailAddressRequest& request);

                /**
                 *This API is used to create a sender domain. Before you can send an email using Tencent Cloud SES, you must create a sender domain as your identity. It can be the domain of your website or mobile app. You must verify the domain to prove that you own it and authorize Tencent Cloud SES to use it to send emails.
                 * @param req CreateEmailIdentityRequest
                 * @return CreateEmailIdentityOutcome
                 */
                CreateEmailIdentityOutcome CreateEmailIdentity(const Model::CreateEmailIdentityRequest &request);
                void CreateEmailIdentityAsync(const Model::CreateEmailIdentityRequest& request, const CreateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailIdentityOutcomeCallable CreateEmailIdentityCallable(const Model::CreateEmailIdentityRequest& request);

                /**
                 *This API is used to create a TEXT or HTML email template. To create an HTML template, ensure that it does not include external CSS files. You can use {{variable name}} to specify a variable in the template.
Note: only an approved template can be used to send emails.
                 * @param req CreateEmailTemplateRequest
                 * @return CreateEmailTemplateOutcome
                 */
                CreateEmailTemplateOutcome CreateEmailTemplate(const Model::CreateEmailTemplateRequest &request);
                void CreateEmailTemplateAsync(const Model::CreateEmailTemplateRequest& request, const CreateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEmailTemplateOutcomeCallable CreateEmailTemplateCallable(const Model::CreateEmailTemplateRequest& request);

                /**
                 *This API is used to create a recipient group, which is the list of target email addresses for batch sending emails. After creating a group, you need to upload recipient email addresses. Then, you can create a sending task and select the group to batch send emails.
                 * @param req CreateReceiverRequest
                 * @return CreateReceiverOutcome
                 */
                CreateReceiverOutcome CreateReceiver(const Model::CreateReceiverRequest &request);
                void CreateReceiverAsync(const Model::CreateReceiverRequest& request, const CreateReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReceiverOutcomeCallable CreateReceiverCallable(const Model::CreateReceiverRequest& request);

                /**
                 *This API is used to add recipient email addresses (up to 100,000 at a time) to a recipient group. This will be processed asynchronously. You can upload recipient email addresses only once. If the data volume is large, it may take some time to upload. You can check the recipient group to learn the upload status and upload quantity.
                 * @param req CreateReceiverDetailRequest
                 * @return CreateReceiverDetailOutcome
                 */
                CreateReceiverDetailOutcome CreateReceiverDetail(const Model::CreateReceiverDetailRequest &request);
                void CreateReceiverDetailAsync(const Model::CreateReceiverDetailRequest& request, const CreateReceiverDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateReceiverDetailOutcomeCallable CreateReceiverDetailCallable(const Model::CreateReceiverDetailRequest& request);

                /**
                 *This API is used to unblocklist email addresses. If you confirm that a blocklisted recipient address is valid and active, you can remove it from Tencent Cloud’s address blocklist database.
                 * @param req DeleteBlackListRequest
                 * @return DeleteBlackListOutcome
                 */
                DeleteBlackListOutcome DeleteBlackList(const Model::DeleteBlackListRequest &request);
                void DeleteBlackListAsync(const Model::DeleteBlackListRequest& request, const DeleteBlackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBlackListOutcomeCallable DeleteBlackListCallable(const Model::DeleteBlackListRequest& request);

                /**
                 *This API is used to delete a sender address.
                 * @param req DeleteEmailAddressRequest
                 * @return DeleteEmailAddressOutcome
                 */
                DeleteEmailAddressOutcome DeleteEmailAddress(const Model::DeleteEmailAddressRequest &request);
                void DeleteEmailAddressAsync(const Model::DeleteEmailAddressRequest& request, const DeleteEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailAddressOutcomeCallable DeleteEmailAddressCallable(const Model::DeleteEmailAddressRequest& request);

                /**
                 *This API is used to delete a sender domain. After deleted, the sender domain can no longer be used to send emails.
                 * @param req DeleteEmailIdentityRequest
                 * @return DeleteEmailIdentityOutcome
                 */
                DeleteEmailIdentityOutcome DeleteEmailIdentity(const Model::DeleteEmailIdentityRequest &request);
                void DeleteEmailIdentityAsync(const Model::DeleteEmailIdentityRequest& request, const DeleteEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailIdentityOutcomeCallable DeleteEmailIdentityCallable(const Model::DeleteEmailIdentityRequest& request);

                /**
                 *This API is used to delete an email template.
                 * @param req DeleteEmailTemplateRequest
                 * @return DeleteEmailTemplateOutcome
                 */
                DeleteEmailTemplateOutcome DeleteEmailTemplate(const Model::DeleteEmailTemplateRequest &request);
                void DeleteEmailTemplateAsync(const Model::DeleteEmailTemplateRequest& request, const DeleteEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEmailTemplateOutcomeCallable DeleteEmailTemplateCallable(const Model::DeleteEmailTemplateRequest& request);

                /**
                 *This API is used to get the configuration details of a sender domain.
                 * @param req GetEmailIdentityRequest
                 * @return GetEmailIdentityOutcome
                 */
                GetEmailIdentityOutcome GetEmailIdentity(const Model::GetEmailIdentityRequest &request);
                void GetEmailIdentityAsync(const Model::GetEmailIdentityRequest& request, const GetEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmailIdentityOutcomeCallable GetEmailIdentityCallable(const Model::GetEmailIdentityRequest& request);

                /**
                 *This API is used to get the details of a template.
                 * @param req GetEmailTemplateRequest
                 * @return GetEmailTemplateOutcome
                 */
                GetEmailTemplateOutcome GetEmailTemplate(const Model::GetEmailTemplateRequest &request);
                void GetEmailTemplateAsync(const Model::GetEmailTemplateRequest& request, const GetEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetEmailTemplateOutcomeCallable GetEmailTemplateCallable(const Model::GetEmailTemplateRequest& request);

                /**
                 *This API is used to get email sending status. Only data within 30 days can be queried.
                 * @param req GetSendEmailStatusRequest
                 * @return GetSendEmailStatusOutcome
                 */
                GetSendEmailStatusOutcome GetSendEmailStatus(const Model::GetSendEmailStatusRequest &request);
                void GetSendEmailStatusAsync(const Model::GetSendEmailStatusRequest& request, const GetSendEmailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetSendEmailStatusOutcomeCallable GetSendEmailStatusCallable(const Model::GetSendEmailStatusRequest& request);

                /**
                 *This API is used to get the email sending statistics over a recent period, including data on sent emails, delivery success rate, open rate, bounce rate, and so on.
                 * @param req GetStatisticsReportRequest
                 * @return GetStatisticsReportOutcome
                 */
                GetStatisticsReportOutcome GetStatisticsReport(const Model::GetStatisticsReportRequest &request);
                void GetStatisticsReportAsync(const Model::GetStatisticsReportRequest& request, const GetStatisticsReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetStatisticsReportOutcomeCallable GetStatisticsReportCallable(const Model::GetStatisticsReportRequest& request);

                /**
                 *The API is used to get blocklisted addresses. In the case of a hard bounce, Tencent Cloud will blocklist the recipient address and do not allow any user to send emails to this address. If you confirm that this is a misjudgment, you can remove it from the blocklist.
                 * @param req ListBlackEmailAddressRequest
                 * @return ListBlackEmailAddressOutcome
                 */
                ListBlackEmailAddressOutcome ListBlackEmailAddress(const Model::ListBlackEmailAddressRequest &request);
                void ListBlackEmailAddressAsync(const Model::ListBlackEmailAddressRequest& request, const ListBlackEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListBlackEmailAddressOutcomeCallable ListBlackEmailAddressCallable(const Model::ListBlackEmailAddressRequest& request);

                /**
                 *This API is used to get the list of sender addresses.
                 * @param req ListEmailAddressRequest
                 * @return ListEmailAddressOutcome
                 */
                ListEmailAddressOutcome ListEmailAddress(const Model::ListEmailAddressRequest &request);
                void ListEmailAddressAsync(const Model::ListEmailAddressRequest& request, const ListEmailAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailAddressOutcomeCallable ListEmailAddressCallable(const Model::ListEmailAddressRequest& request);

                /**
                 *This API is used to get the list of sender domains, including verified and unverified domains.
                 * @param req ListEmailIdentitiesRequest
                 * @return ListEmailIdentitiesOutcome
                 */
                ListEmailIdentitiesOutcome ListEmailIdentities(const Model::ListEmailIdentitiesRequest &request);
                void ListEmailIdentitiesAsync(const Model::ListEmailIdentitiesRequest& request, const ListEmailIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailIdentitiesOutcomeCallable ListEmailIdentitiesCallable(const Model::ListEmailIdentitiesRequest& request);

                /**
                 *This API is used to get the list of email templates.
                 * @param req ListEmailTemplatesRequest
                 * @return ListEmailTemplatesOutcome
                 */
                ListEmailTemplatesOutcome ListEmailTemplates(const Model::ListEmailTemplatesRequest &request);
                void ListEmailTemplatesAsync(const Model::ListEmailTemplatesRequest& request, const ListEmailTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEmailTemplatesOutcomeCallable ListEmailTemplatesCallable(const Model::ListEmailTemplatesRequest& request);

                /**
                 *This API is used to query recipient groups. It supports pagination, fuzzy query, and query by status.
                 * @param req ListReceiversRequest
                 * @return ListReceiversOutcome
                 */
                ListReceiversOutcome ListReceivers(const Model::ListReceiversRequest &request);
                void ListReceiversAsync(const Model::ListReceiversRequest& request, const ListReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListReceiversOutcomeCallable ListReceiversCallable(const Model::ListReceiversRequest& request);

                /**
                 *This API is used to query batch email sending tasks (including immediate, scheduled, and recurring tasks) by page. You can query task data including the number of emails requested to be sent, the number of sent emails, the number of cached emails, and task status.
                 * @param req ListSendTasksRequest
                 * @return ListSendTasksOutcome
                 */
                ListSendTasksOutcome ListSendTasks(const Model::ListSendTasksRequest &request);
                void ListSendTasksAsync(const Model::ListSendTasksRequest& request, const ListSendTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListSendTasksOutcomeCallable ListSendTasksCallable(const Model::ListSendTasksRequest& request);

                /**
                 *This API is used to send a TEXT or HTML email triggered for authentication or transaction. By default, you can send emails using a template only. To send custom content, please contact your sales rep to enable this feature.
                 * @param req SendEmailRequest
                 * @return SendEmailOutcome
                 */
                SendEmailOutcome SendEmail(const Model::SendEmailRequest &request);
                void SendEmailAsync(const Model::SendEmailRequest& request, const SendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request);

                /**
                 *This API is used to verify whether your DNS configuration is correct.
                 * @param req UpdateEmailIdentityRequest
                 * @return UpdateEmailIdentityOutcome
                 */
                UpdateEmailIdentityOutcome UpdateEmailIdentity(const Model::UpdateEmailIdentityRequest &request);
                void UpdateEmailIdentityAsync(const Model::UpdateEmailIdentityRequest& request, const UpdateEmailIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEmailIdentityOutcomeCallable UpdateEmailIdentityCallable(const Model::UpdateEmailIdentityRequest& request);

                /**
                 *This API is used to update an email template. An updated template must be approved again before it can be used.
                 * @param req UpdateEmailTemplateRequest
                 * @return UpdateEmailTemplateOutcome
                 */
                UpdateEmailTemplateOutcome UpdateEmailTemplate(const Model::UpdateEmailTemplateRequest &request);
                void UpdateEmailTemplateAsync(const Model::UpdateEmailTemplateRequest& request, const UpdateEmailTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEmailTemplateOutcomeCallable UpdateEmailTemplateCallable(const Model::UpdateEmailTemplateRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_SESCLIENT_H_

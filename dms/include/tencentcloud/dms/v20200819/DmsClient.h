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

#ifndef TENCENTCLOUD_DMS_V20200819_DMSCLIENT_H_
#define TENCENTCLOUD_DMS_V20200819_DMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/dms/v20200819/model/SendEmailRequest.h>
#include <tencentcloud/dms/v20200819/model/SendEmailResponse.h>
#include <tencentcloud/dms/v20200819/model/SendTemplatedEmailRequest.h>
#include <tencentcloud/dms/v20200819/model/SendTemplatedEmailResponse.h>


namespace TencentCloud
{
    namespace Dms
    {
        namespace V20200819
        {
            class DmsClient : public AbstractClient
            {
            public:
                DmsClient(const Credential &credential, const std::string &region);
                DmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::SendEmailResponse> SendEmailOutcome;
                typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
                typedef std::function<void(const DmsClient*, const Model::SendEmailRequest&, SendEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendEmailAsyncHandler;
                typedef Outcome<Core::Error, Model::SendTemplatedEmailResponse> SendTemplatedEmailOutcome;
                typedef std::future<SendTemplatedEmailOutcome> SendTemplatedEmailOutcomeCallable;
                typedef std::function<void(const DmsClient*, const Model::SendTemplatedEmailRequest&, SendTemplatedEmailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SendTemplatedEmailAsyncHandler;



                /**
                 *This API is used to send regular emails.
                 * @param req SendEmailRequest
                 * @return SendEmailOutcome
                 */
                SendEmailOutcome SendEmail(const Model::SendEmailRequest &request);
                void SendEmailAsync(const Model::SendEmailRequest& request, const SendEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request);

                /**
                 *This API is used to send template emails.
                 * @param req SendTemplatedEmailRequest
                 * @return SendTemplatedEmailOutcome
                 */
                SendTemplatedEmailOutcome SendTemplatedEmail(const Model::SendTemplatedEmailRequest &request);
                void SendTemplatedEmailAsync(const Model::SendTemplatedEmailRequest& request, const SendTemplatedEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SendTemplatedEmailOutcomeCallable SendTemplatedEmailCallable(const Model::SendTemplatedEmailRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_DMS_V20200819_DMSCLIENT_H_

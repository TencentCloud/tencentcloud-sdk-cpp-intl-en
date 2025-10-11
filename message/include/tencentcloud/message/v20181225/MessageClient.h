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

#ifndef TENCENTCLOUD_MESSAGE_V20181225_MESSAGECLIENT_H_
#define TENCENTCLOUD_MESSAGE_V20181225_MESSAGECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/message/v20181225/model/ModifySendChannelOnMsgTypesRequest.h>
#include <tencentcloud/message/v20181225/model/ModifySendChannelOnMsgTypesResponse.h>


namespace TencentCloud
{
    namespace Message
    {
        namespace V20181225
        {
            class MessageClient : public AbstractClient
            {
            public:
                MessageClient(const Credential &credential, const std::string &region);
                MessageClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ModifySendChannelOnMsgTypesResponse> ModifySendChannelOnMsgTypesOutcome;
                typedef std::future<ModifySendChannelOnMsgTypesOutcome> ModifySendChannelOnMsgTypesOutcomeCallable;
                typedef std::function<void(const MessageClient*, const Model::ModifySendChannelOnMsgTypesRequest&, ModifySendChannelOnMsgTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySendChannelOnMsgTypesAsyncHandler;



                /**
                 *This API is used to batch modify delivery methods.
                 * @param req ModifySendChannelOnMsgTypesRequest
                 * @return ModifySendChannelOnMsgTypesOutcome
                 */
                ModifySendChannelOnMsgTypesOutcome ModifySendChannelOnMsgTypes(const Model::ModifySendChannelOnMsgTypesRequest &request);
                void ModifySendChannelOnMsgTypesAsync(const Model::ModifySendChannelOnMsgTypesRequest& request, const ModifySendChannelOnMsgTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySendChannelOnMsgTypesOutcomeCallable ModifySendChannelOnMsgTypesCallable(const Model::ModifySendChannelOnMsgTypesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MESSAGE_V20181225_MESSAGECLIENT_H_

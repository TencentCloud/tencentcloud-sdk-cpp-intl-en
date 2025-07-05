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

#ifndef TENCENTCLOUD_TBAAS_V20180416_TBAASCLIENT_H_
#define TENCENTCLOUD_TBAAS_V20180416_TBAASCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tbaas/v20180416/model/DescribeFabricBlockRequest.h>
#include <tencentcloud/tbaas/v20180416/model/DescribeFabricBlockResponse.h>
#include <tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionRequest.h>
#include <tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionResponse.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeFabricChaincodeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/InvokeFabricChaincodeResponse.h>
#include <tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeRequest.h>
#include <tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeResponse.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            class TbaasClient : public AbstractClient
            {
            public:
                TbaasClient(const Credential &credential, const std::string &region);
                TbaasClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeFabricBlockResponse> DescribeFabricBlockOutcome;
                typedef std::future<DescribeFabricBlockOutcome> DescribeFabricBlockOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::DescribeFabricBlockRequest&, DescribeFabricBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFabricBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFabricTransactionResponse> DescribeFabricTransactionOutcome;
                typedef std::future<DescribeFabricTransactionOutcome> DescribeFabricTransactionOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::DescribeFabricTransactionRequest&, DescribeFabricTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFabricTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeFabricChaincodeResponse> InvokeFabricChaincodeOutcome;
                typedef std::future<InvokeFabricChaincodeOutcome> InvokeFabricChaincodeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::InvokeFabricChaincodeRequest&, InvokeFabricChaincodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeFabricChaincodeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryFabricChaincodeResponse> QueryFabricChaincodeOutcome;
                typedef std::future<QueryFabricChaincodeOutcome> QueryFabricChaincodeOutcomeCallable;
                typedef std::function<void(const TbaasClient*, const Model::QueryFabricChaincodeRequest&, QueryFabricChaincodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryFabricChaincodeAsyncHandler;



                /**
                 *This API is used to retrieve the detailed information of a block in Fabric.
                 * @param req DescribeFabricBlockRequest
                 * @return DescribeFabricBlockOutcome
                 */
                DescribeFabricBlockOutcome DescribeFabricBlock(const Model::DescribeFabricBlockRequest &request);
                void DescribeFabricBlockAsync(const Model::DescribeFabricBlockRequest& request, const DescribeFabricBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFabricBlockOutcomeCallable DescribeFabricBlockCallable(const Model::DescribeFabricBlockRequest& request);

                /**
                 *This API is used to obtain detailed information of Fabric transactions.
                 * @param req DescribeFabricTransactionRequest
                 * @return DescribeFabricTransactionOutcome
                 */
                DescribeFabricTransactionOutcome DescribeFabricTransaction(const Model::DescribeFabricTransactionRequest &request);
                void DescribeFabricTransactionAsync(const Model::DescribeFabricTransactionRequest& request, const DescribeFabricTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFabricTransactionOutcomeCallable DescribeFabricTransactionCallable(const Model::DescribeFabricTransactionRequest& request);

                /**
                 *This API is used to call a Fabric user contract to execute a transaction.
                 * @param req InvokeFabricChaincodeRequest
                 * @return InvokeFabricChaincodeOutcome
                 */
                InvokeFabricChaincodeOutcome InvokeFabricChaincode(const Model::InvokeFabricChaincodeRequest &request);
                void InvokeFabricChaincodeAsync(const Model::InvokeFabricChaincodeRequest& request, const InvokeFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeFabricChaincodeOutcomeCallable InvokeFabricChaincodeCallable(const Model::InvokeFabricChaincodeRequest& request);

                /**
                 *This API is used to make a user contract call in Fabric for querying.
                 * @param req QueryFabricChaincodeRequest
                 * @return QueryFabricChaincodeOutcome
                 */
                QueryFabricChaincodeOutcome QueryFabricChaincode(const Model::QueryFabricChaincodeRequest &request);
                void QueryFabricChaincodeAsync(const Model::QueryFabricChaincodeRequest& request, const QueryFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryFabricChaincodeOutcomeCallable QueryFabricChaincodeCallable(const Model::QueryFabricChaincodeRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_TBAASCLIENT_H_

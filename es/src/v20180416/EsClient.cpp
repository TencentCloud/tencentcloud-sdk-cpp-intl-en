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

#include <tencentcloud/es/v20180416/EsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Es::V20180416;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "es.intl.tencentcloudapi.com";
}

EsClient::EsClient(const Credential &credential, const string &region) :
    EsClient(credential, region, ClientProfile())
{
}

EsClient::EsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EsClient::CreateIndexOutcome EsClient::CreateIndex(const CreateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIndexResponse rsp = CreateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIndexOutcome(rsp);
        else
            return CreateIndexOutcome(o.GetError());
    }
    else
    {
        return CreateIndexOutcome(outcome.GetError());
    }
}

void EsClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIndexRequest&;
    using Resp = CreateIndexResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateIndexOutcomeCallable EsClient::CreateIndexCallable(const CreateIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIndexOutcome>>();
    CreateIndexAsync(
    request,
    [prom](
        const EsClient*,
        const CreateIndexRequest&,
        CreateIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::CreateInstanceOutcome EsClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void EsClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::CreateInstanceOutcomeCallable EsClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteIndexOutcome EsClient::DeleteIndex(const DeleteIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIndexResponse rsp = DeleteIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIndexOutcome(rsp);
        else
            return DeleteIndexOutcome(o.GetError());
    }
    else
    {
        return DeleteIndexOutcome(outcome.GetError());
    }
}

void EsClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIndexRequest&;
    using Resp = DeleteIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteIndexOutcomeCallable EsClient::DeleteIndexCallable(const DeleteIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIndexOutcome>>();
    DeleteIndexAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteIndexRequest&,
        DeleteIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DeleteInstanceOutcome EsClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void EsClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstanceRequest&;
    using Resp = DeleteInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DeleteInstanceOutcomeCallable EsClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceOutcome>>();
    DeleteInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const DeleteInstanceRequest&,
        DeleteInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeIndexListOutcome EsClient::DescribeIndexList(const DescribeIndexListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexListResponse rsp = DescribeIndexListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexListOutcome(rsp);
        else
            return DescribeIndexListOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexListOutcome(outcome.GetError());
    }
}

void EsClient::DescribeIndexListAsync(const DescribeIndexListRequest& request, const DescribeIndexListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIndexListRequest&;
    using Resp = DescribeIndexListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIndexList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeIndexListOutcomeCallable EsClient::DescribeIndexListCallable(const DescribeIndexListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIndexListOutcome>>();
    DescribeIndexListAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeIndexListRequest&,
        DescribeIndexListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeIndexMetaOutcome EsClient::DescribeIndexMeta(const DescribeIndexMetaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndexMeta");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexMetaResponse rsp = DescribeIndexMetaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexMetaOutcome(rsp);
        else
            return DescribeIndexMetaOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexMetaOutcome(outcome.GetError());
    }
}

void EsClient::DescribeIndexMetaAsync(const DescribeIndexMetaRequest& request, const DescribeIndexMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIndexMetaRequest&;
    using Resp = DescribeIndexMetaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIndexMeta", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeIndexMetaOutcomeCallable EsClient::DescribeIndexMetaCallable(const DescribeIndexMetaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIndexMetaOutcome>>();
    DescribeIndexMetaAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeIndexMetaRequest&,
        DescribeIndexMetaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeInstanceLogsOutcome EsClient::DescribeInstanceLogs(const DescribeInstanceLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceLogsResponse rsp = DescribeInstanceLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceLogsOutcome(rsp);
        else
            return DescribeInstanceLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceLogsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstanceLogsAsync(const DescribeInstanceLogsRequest& request, const DescribeInstanceLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceLogsRequest&;
    using Resp = DescribeInstanceLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeInstanceLogsOutcomeCallable EsClient::DescribeInstanceLogsCallable(const DescribeInstanceLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceLogsOutcome>>();
    DescribeInstanceLogsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeInstanceLogsRequest&,
        DescribeInstanceLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeInstanceOperationsOutcome EsClient::DescribeInstanceOperations(const DescribeInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationsResponse rsp = DescribeInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationsOutcome(rsp);
        else
            return DescribeInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstanceOperationsAsync(const DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceOperationsRequest&;
    using Resp = DescribeInstanceOperationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceOperations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeInstanceOperationsOutcomeCallable EsClient::DescribeInstanceOperationsCallable(const DescribeInstanceOperationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOperationsOutcome>>();
    DescribeInstanceOperationsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeInstanceOperationsRequest&,
        DescribeInstanceOperationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeInstancesOutcome EsClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EsClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeInstancesOutcomeCallable EsClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::DescribeViewsOutcome EsClient::DescribeViews(const DescribeViewsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeViews");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeViewsResponse rsp = DescribeViewsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeViewsOutcome(rsp);
        else
            return DescribeViewsOutcome(o.GetError());
    }
    else
    {
        return DescribeViewsOutcome(outcome.GetError());
    }
}

void EsClient::DescribeViewsAsync(const DescribeViewsRequest& request, const DescribeViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeViewsRequest&;
    using Resp = DescribeViewsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeViews", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::DescribeViewsOutcomeCallable EsClient::DescribeViewsCallable(const DescribeViewsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeViewsOutcome>>();
    DescribeViewsAsync(
    request,
    [prom](
        const EsClient*,
        const DescribeViewsRequest&,
        DescribeViewsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::GetRequestTargetNodeTypesOutcome EsClient::GetRequestTargetNodeTypes(const GetRequestTargetNodeTypesRequest &request)
{
    auto outcome = MakeRequest(request, "GetRequestTargetNodeTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRequestTargetNodeTypesResponse rsp = GetRequestTargetNodeTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRequestTargetNodeTypesOutcome(rsp);
        else
            return GetRequestTargetNodeTypesOutcome(o.GetError());
    }
    else
    {
        return GetRequestTargetNodeTypesOutcome(outcome.GetError());
    }
}

void EsClient::GetRequestTargetNodeTypesAsync(const GetRequestTargetNodeTypesRequest& request, const GetRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetRequestTargetNodeTypesRequest&;
    using Resp = GetRequestTargetNodeTypesResponse;

    DoRequestAsync<Req, Resp>(
        "GetRequestTargetNodeTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::GetRequestTargetNodeTypesOutcomeCallable EsClient::GetRequestTargetNodeTypesCallable(const GetRequestTargetNodeTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetRequestTargetNodeTypesOutcome>>();
    GetRequestTargetNodeTypesAsync(
    request,
    [prom](
        const EsClient*,
        const GetRequestTargetNodeTypesRequest&,
        GetRequestTargetNodeTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::RestartInstanceOutcome EsClient::RestartInstance(const RestartInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RestartInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartInstanceResponse rsp = RestartInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartInstanceOutcome(rsp);
        else
            return RestartInstanceOutcome(o.GetError());
    }
    else
    {
        return RestartInstanceOutcome(outcome.GetError());
    }
}

void EsClient::RestartInstanceAsync(const RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartInstanceRequest&;
    using Resp = RestartInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RestartInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RestartInstanceOutcomeCallable EsClient::RestartInstanceCallable(const RestartInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartInstanceOutcome>>();
    RestartInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const RestartInstanceRequest&,
        RestartInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::RestartKibanaOutcome EsClient::RestartKibana(const RestartKibanaRequest &request)
{
    auto outcome = MakeRequest(request, "RestartKibana");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartKibanaResponse rsp = RestartKibanaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartKibanaOutcome(rsp);
        else
            return RestartKibanaOutcome(o.GetError());
    }
    else
    {
        return RestartKibanaOutcome(outcome.GetError());
    }
}

void EsClient::RestartKibanaAsync(const RestartKibanaRequest& request, const RestartKibanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartKibanaRequest&;
    using Resp = RestartKibanaResponse;

    DoRequestAsync<Req, Resp>(
        "RestartKibana", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RestartKibanaOutcomeCallable EsClient::RestartKibanaCallable(const RestartKibanaRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartKibanaOutcome>>();
    RestartKibanaAsync(
    request,
    [prom](
        const EsClient*,
        const RestartKibanaRequest&,
        RestartKibanaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::RestartNodesOutcome EsClient::RestartNodes(const RestartNodesRequest &request)
{
    auto outcome = MakeRequest(request, "RestartNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartNodesResponse rsp = RestartNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartNodesOutcome(rsp);
        else
            return RestartNodesOutcome(o.GetError());
    }
    else
    {
        return RestartNodesOutcome(outcome.GetError());
    }
}

void EsClient::RestartNodesAsync(const RestartNodesRequest& request, const RestartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartNodesRequest&;
    using Resp = RestartNodesResponse;

    DoRequestAsync<Req, Resp>(
        "RestartNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::RestartNodesOutcomeCallable EsClient::RestartNodesCallable(const RestartNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartNodesOutcome>>();
    RestartNodesAsync(
    request,
    [prom](
        const EsClient*,
        const RestartNodesRequest&,
        RestartNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateDictionariesOutcome EsClient::UpdateDictionaries(const UpdateDictionariesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDictionaries");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDictionariesResponse rsp = UpdateDictionariesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDictionariesOutcome(rsp);
        else
            return UpdateDictionariesOutcome(o.GetError());
    }
    else
    {
        return UpdateDictionariesOutcome(outcome.GetError());
    }
}

void EsClient::UpdateDictionariesAsync(const UpdateDictionariesRequest& request, const UpdateDictionariesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateDictionariesRequest&;
    using Resp = UpdateDictionariesResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateDictionaries", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateDictionariesOutcomeCallable EsClient::UpdateDictionariesCallable(const UpdateDictionariesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateDictionariesOutcome>>();
    UpdateDictionariesAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateDictionariesRequest&,
        UpdateDictionariesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateIndexOutcome EsClient::UpdateIndex(const UpdateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateIndexResponse rsp = UpdateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateIndexOutcome(rsp);
        else
            return UpdateIndexOutcome(o.GetError());
    }
    else
    {
        return UpdateIndexOutcome(outcome.GetError());
    }
}

void EsClient::UpdateIndexAsync(const UpdateIndexRequest& request, const UpdateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateIndexRequest&;
    using Resp = UpdateIndexResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateIndexOutcomeCallable EsClient::UpdateIndexCallable(const UpdateIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateIndexOutcome>>();
    UpdateIndexAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateIndexRequest&,
        UpdateIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateInstanceOutcome EsClient::UpdateInstance(const UpdateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateInstanceResponse rsp = UpdateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateInstanceOutcome(rsp);
        else
            return UpdateInstanceOutcome(o.GetError());
    }
    else
    {
        return UpdateInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpdateInstanceAsync(const UpdateInstanceRequest& request, const UpdateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateInstanceRequest&;
    using Resp = UpdateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateInstanceOutcomeCallable EsClient::UpdateInstanceCallable(const UpdateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateInstanceOutcome>>();
    UpdateInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateInstanceRequest&,
        UpdateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdatePluginsOutcome EsClient::UpdatePlugins(const UpdatePluginsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePluginsResponse rsp = UpdatePluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePluginsOutcome(rsp);
        else
            return UpdatePluginsOutcome(o.GetError());
    }
    else
    {
        return UpdatePluginsOutcome(outcome.GetError());
    }
}

void EsClient::UpdatePluginsAsync(const UpdatePluginsRequest& request, const UpdatePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdatePluginsRequest&;
    using Resp = UpdatePluginsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdatePlugins", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdatePluginsOutcomeCallable EsClient::UpdatePluginsCallable(const UpdatePluginsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdatePluginsOutcome>>();
    UpdatePluginsAsync(
    request,
    [prom](
        const EsClient*,
        const UpdatePluginsRequest&,
        UpdatePluginsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpdateRequestTargetNodeTypesOutcome EsClient::UpdateRequestTargetNodeTypes(const UpdateRequestTargetNodeTypesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRequestTargetNodeTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRequestTargetNodeTypesResponse rsp = UpdateRequestTargetNodeTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRequestTargetNodeTypesOutcome(rsp);
        else
            return UpdateRequestTargetNodeTypesOutcome(o.GetError());
    }
    else
    {
        return UpdateRequestTargetNodeTypesOutcome(outcome.GetError());
    }
}

void EsClient::UpdateRequestTargetNodeTypesAsync(const UpdateRequestTargetNodeTypesRequest& request, const UpdateRequestTargetNodeTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRequestTargetNodeTypesRequest&;
    using Resp = UpdateRequestTargetNodeTypesResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRequestTargetNodeTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpdateRequestTargetNodeTypesOutcomeCallable EsClient::UpdateRequestTargetNodeTypesCallable(const UpdateRequestTargetNodeTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRequestTargetNodeTypesOutcome>>();
    UpdateRequestTargetNodeTypesAsync(
    request,
    [prom](
        const EsClient*,
        const UpdateRequestTargetNodeTypesRequest&,
        UpdateRequestTargetNodeTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpgradeInstanceOutcome EsClient::UpgradeInstance(const UpgradeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeInstanceResponse rsp = UpgradeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeInstanceOutcome(rsp);
        else
            return UpgradeInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeInstanceOutcome(outcome.GetError());
    }
}

void EsClient::UpgradeInstanceAsync(const UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeInstanceRequest&;
    using Resp = UpgradeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpgradeInstanceOutcomeCallable EsClient::UpgradeInstanceCallable(const UpgradeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeInstanceOutcome>>();
    UpgradeInstanceAsync(
    request,
    [prom](
        const EsClient*,
        const UpgradeInstanceRequest&,
        UpgradeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EsClient::UpgradeLicenseOutcome EsClient::UpgradeLicense(const UpgradeLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeLicenseResponse rsp = UpgradeLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeLicenseOutcome(rsp);
        else
            return UpgradeLicenseOutcome(o.GetError());
    }
    else
    {
        return UpgradeLicenseOutcome(outcome.GetError());
    }
}

void EsClient::UpgradeLicenseAsync(const UpgradeLicenseRequest& request, const UpgradeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeLicenseRequest&;
    using Resp = UpgradeLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EsClient::UpgradeLicenseOutcomeCallable EsClient::UpgradeLicenseCallable(const UpgradeLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeLicenseOutcome>>();
    UpgradeLicenseAsync(
    request,
    [prom](
        const EsClient*,
        const UpgradeLicenseRequest&,
        UpgradeLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


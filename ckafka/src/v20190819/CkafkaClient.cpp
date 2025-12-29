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

#include <tencentcloud/ckafka/v20190819/CkafkaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ckafka::V20190819;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-08-19";
    const string ENDPOINT = "ckafka.intl.tencentcloudapi.com";
}

CkafkaClient::CkafkaClient(const Credential &credential, const string &region) :
    CkafkaClient(credential, region, ClientProfile())
{
}

CkafkaClient::CkafkaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CkafkaClient::BatchCreateAclOutcome CkafkaClient::BatchCreateAcl(const BatchCreateAclRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateAclResponse rsp = BatchCreateAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateAclOutcome(rsp);
        else
            return BatchCreateAclOutcome(o.GetError());
    }
    else
    {
        return BatchCreateAclOutcome(outcome.GetError());
    }
}

void CkafkaClient::BatchCreateAclAsync(const BatchCreateAclRequest& request, const BatchCreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchCreateAclRequest&;
    using Resp = BatchCreateAclResponse;

    DoRequestAsync<Req, Resp>(
        "BatchCreateAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::BatchCreateAclOutcomeCallable CkafkaClient::BatchCreateAclCallable(const BatchCreateAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchCreateAclOutcome>>();
    BatchCreateAclAsync(
    request,
    [prom](
        const CkafkaClient*,
        const BatchCreateAclRequest&,
        BatchCreateAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::BatchModifyGroupOffsetsOutcome CkafkaClient::BatchModifyGroupOffsets(const BatchModifyGroupOffsetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyGroupOffsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyGroupOffsetsResponse rsp = BatchModifyGroupOffsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyGroupOffsetsOutcome(rsp);
        else
            return BatchModifyGroupOffsetsOutcome(o.GetError());
    }
    else
    {
        return BatchModifyGroupOffsetsOutcome(outcome.GetError());
    }
}

void CkafkaClient::BatchModifyGroupOffsetsAsync(const BatchModifyGroupOffsetsRequest& request, const BatchModifyGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyGroupOffsetsRequest&;
    using Resp = BatchModifyGroupOffsetsResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyGroupOffsets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::BatchModifyGroupOffsetsOutcomeCallable CkafkaClient::BatchModifyGroupOffsetsCallable(const BatchModifyGroupOffsetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyGroupOffsetsOutcome>>();
    BatchModifyGroupOffsetsAsync(
    request,
    [prom](
        const CkafkaClient*,
        const BatchModifyGroupOffsetsRequest&,
        BatchModifyGroupOffsetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::BatchModifyTopicAttributesOutcome CkafkaClient::BatchModifyTopicAttributes(const BatchModifyTopicAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTopicAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTopicAttributesResponse rsp = BatchModifyTopicAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTopicAttributesOutcome(rsp);
        else
            return BatchModifyTopicAttributesOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTopicAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::BatchModifyTopicAttributesAsync(const BatchModifyTopicAttributesRequest& request, const BatchModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyTopicAttributesRequest&;
    using Resp = BatchModifyTopicAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyTopicAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::BatchModifyTopicAttributesOutcomeCallable CkafkaClient::BatchModifyTopicAttributesCallable(const BatchModifyTopicAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyTopicAttributesOutcome>>();
    BatchModifyTopicAttributesAsync(
    request,
    [prom](
        const CkafkaClient*,
        const BatchModifyTopicAttributesRequest&,
        BatchModifyTopicAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateAclOutcome CkafkaClient::CreateAcl(const CreateAclRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAclResponse rsp = CreateAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAclOutcome(rsp);
        else
            return CreateAclOutcome(o.GetError());
    }
    else
    {
        return CreateAclOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAclRequest&;
    using Resp = CreateAclResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateAclOutcomeCallable CkafkaClient::CreateAclCallable(const CreateAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAclOutcome>>();
    CreateAclAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateAclRequest&,
        CreateAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateAclRuleOutcome CkafkaClient::CreateAclRule(const CreateAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAclRuleResponse rsp = CreateAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAclRuleOutcome(rsp);
        else
            return CreateAclRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAclRuleOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateAclRuleAsync(const CreateAclRuleRequest& request, const CreateAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAclRuleRequest&;
    using Resp = CreateAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateAclRuleOutcomeCallable CkafkaClient::CreateAclRuleCallable(const CreateAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAclRuleOutcome>>();
    CreateAclRuleAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateAclRuleRequest&,
        CreateAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateConsumerOutcome CkafkaClient::CreateConsumer(const CreateConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerResponse rsp = CreateConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerOutcome(rsp);
        else
            return CreateConsumerOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateConsumerAsync(const CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConsumerRequest&;
    using Resp = CreateConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateConsumerOutcomeCallable CkafkaClient::CreateConsumerCallable(const CreateConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConsumerOutcome>>();
    CreateConsumerAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateConsumerRequest&,
        CreateConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateDatahubTopicOutcome CkafkaClient::CreateDatahubTopic(const CreateDatahubTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatahubTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatahubTopicResponse rsp = CreateDatahubTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatahubTopicOutcome(rsp);
        else
            return CreateDatahubTopicOutcome(o.GetError());
    }
    else
    {
        return CreateDatahubTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateDatahubTopicAsync(const CreateDatahubTopicRequest& request, const CreateDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDatahubTopicRequest&;
    using Resp = CreateDatahubTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDatahubTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateDatahubTopicOutcomeCallable CkafkaClient::CreateDatahubTopicCallable(const CreateDatahubTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatahubTopicOutcome>>();
    CreateDatahubTopicAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateDatahubTopicRequest&,
        CreateDatahubTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateInstancePreOutcome CkafkaClient::CreateInstancePre(const CreateInstancePreRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstancePre");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancePreResponse rsp = CreateInstancePreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancePreOutcome(rsp);
        else
            return CreateInstancePreOutcome(o.GetError());
    }
    else
    {
        return CreateInstancePreOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateInstancePreAsync(const CreateInstancePreRequest& request, const CreateInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstancePreRequest&;
    using Resp = CreateInstancePreResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstancePre", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateInstancePreOutcomeCallable CkafkaClient::CreateInstancePreCallable(const CreateInstancePreRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstancePreOutcome>>();
    CreateInstancePreAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateInstancePreRequest&,
        CreateInstancePreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreatePartitionOutcome CkafkaClient::CreatePartition(const CreatePartitionRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePartitionResponse rsp = CreatePartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePartitionOutcome(rsp);
        else
            return CreatePartitionOutcome(o.GetError());
    }
    else
    {
        return CreatePartitionOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreatePartitionAsync(const CreatePartitionRequest& request, const CreatePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePartitionRequest&;
    using Resp = CreatePartitionResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePartition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreatePartitionOutcomeCallable CkafkaClient::CreatePartitionCallable(const CreatePartitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePartitionOutcome>>();
    CreatePartitionAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreatePartitionRequest&,
        CreatePartitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreatePostPaidInstanceOutcome CkafkaClient::CreatePostPaidInstance(const CreatePostPaidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePostPaidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePostPaidInstanceResponse rsp = CreatePostPaidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePostPaidInstanceOutcome(rsp);
        else
            return CreatePostPaidInstanceOutcome(o.GetError());
    }
    else
    {
        return CreatePostPaidInstanceOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreatePostPaidInstanceAsync(const CreatePostPaidInstanceRequest& request, const CreatePostPaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePostPaidInstanceRequest&;
    using Resp = CreatePostPaidInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePostPaidInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreatePostPaidInstanceOutcomeCallable CkafkaClient::CreatePostPaidInstanceCallable(const CreatePostPaidInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePostPaidInstanceOutcome>>();
    CreatePostPaidInstanceAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreatePostPaidInstanceRequest&,
        CreatePostPaidInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateRouteOutcome CkafkaClient::CreateRoute(const CreateRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRouteResponse rsp = CreateRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRouteOutcome(rsp);
        else
            return CreateRouteOutcome(o.GetError());
    }
    else
    {
        return CreateRouteOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRouteRequest&;
    using Resp = CreateRouteResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateRouteOutcomeCallable CkafkaClient::CreateRouteCallable(const CreateRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRouteOutcome>>();
    CreateRouteAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateRouteRequest&,
        CreateRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateTopicOutcome CkafkaClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicRequest&;
    using Resp = CreateTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateTopicOutcomeCallable CkafkaClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicOutcome>>();
    CreateTopicAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateTopicRequest&,
        CreateTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateTopicIpWhiteListOutcome CkafkaClient::CreateTopicIpWhiteList(const CreateTopicIpWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopicIpWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicIpWhiteListResponse rsp = CreateTopicIpWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicIpWhiteListOutcome(rsp);
        else
            return CreateTopicIpWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateTopicIpWhiteListOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateTopicIpWhiteListAsync(const CreateTopicIpWhiteListRequest& request, const CreateTopicIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicIpWhiteListRequest&;
    using Resp = CreateTopicIpWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopicIpWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateTopicIpWhiteListOutcomeCallable CkafkaClient::CreateTopicIpWhiteListCallable(const CreateTopicIpWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicIpWhiteListOutcome>>();
    CreateTopicIpWhiteListAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateTopicIpWhiteListRequest&,
        CreateTopicIpWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::CreateUserOutcome CkafkaClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::CreateUserOutcomeCallable CkafkaClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const CkafkaClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteAclOutcome CkafkaClient::DeleteAcl(const DeleteAclRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAclResponse rsp = DeleteAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAclOutcome(rsp);
        else
            return DeleteAclOutcome(o.GetError());
    }
    else
    {
        return DeleteAclOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteAclAsync(const DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAclRequest&;
    using Resp = DeleteAclResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAcl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteAclOutcomeCallable CkafkaClient::DeleteAclCallable(const DeleteAclRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAclOutcome>>();
    DeleteAclAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteAclRequest&,
        DeleteAclOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteAclRuleOutcome CkafkaClient::DeleteAclRule(const DeleteAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAclRuleResponse rsp = DeleteAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAclRuleOutcome(rsp);
        else
            return DeleteAclRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAclRuleOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteAclRuleAsync(const DeleteAclRuleRequest& request, const DeleteAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAclRuleRequest&;
    using Resp = DeleteAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteAclRuleOutcomeCallable CkafkaClient::DeleteAclRuleCallable(const DeleteAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAclRuleOutcome>>();
    DeleteAclRuleAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteAclRuleRequest&,
        DeleteAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteGroupOutcome CkafkaClient::DeleteGroup(const DeleteGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupResponse rsp = DeleteGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupOutcome(rsp);
        else
            return DeleteGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGroupRequest&;
    using Resp = DeleteGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteGroupOutcomeCallable CkafkaClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupOutcome>>();
    DeleteGroupAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteGroupRequest&,
        DeleteGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteGroupSubscribeTopicOutcome CkafkaClient::DeleteGroupSubscribeTopic(const DeleteGroupSubscribeTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroupSubscribeTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupSubscribeTopicResponse rsp = DeleteGroupSubscribeTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupSubscribeTopicOutcome(rsp);
        else
            return DeleteGroupSubscribeTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupSubscribeTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteGroupSubscribeTopicAsync(const DeleteGroupSubscribeTopicRequest& request, const DeleteGroupSubscribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGroupSubscribeTopicRequest&;
    using Resp = DeleteGroupSubscribeTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGroupSubscribeTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteGroupSubscribeTopicOutcomeCallable CkafkaClient::DeleteGroupSubscribeTopicCallable(const DeleteGroupSubscribeTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupSubscribeTopicOutcome>>();
    DeleteGroupSubscribeTopicAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteGroupSubscribeTopicRequest&,
        DeleteGroupSubscribeTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteInstancePostOutcome CkafkaClient::DeleteInstancePost(const DeleteInstancePostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstancePost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstancePostResponse rsp = DeleteInstancePostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstancePostOutcome(rsp);
        else
            return DeleteInstancePostOutcome(o.GetError());
    }
    else
    {
        return DeleteInstancePostOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteInstancePostAsync(const DeleteInstancePostRequest& request, const DeleteInstancePostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstancePostRequest&;
    using Resp = DeleteInstancePostResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstancePost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteInstancePostOutcomeCallable CkafkaClient::DeleteInstancePostCallable(const DeleteInstancePostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstancePostOutcome>>();
    DeleteInstancePostAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteInstancePostRequest&,
        DeleteInstancePostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteInstancePreOutcome CkafkaClient::DeleteInstancePre(const DeleteInstancePreRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstancePre");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstancePreResponse rsp = DeleteInstancePreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstancePreOutcome(rsp);
        else
            return DeleteInstancePreOutcome(o.GetError());
    }
    else
    {
        return DeleteInstancePreOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteInstancePreAsync(const DeleteInstancePreRequest& request, const DeleteInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteInstancePreRequest&;
    using Resp = DeleteInstancePreResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstancePre", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteInstancePreOutcomeCallable CkafkaClient::DeleteInstancePreCallable(const DeleteInstancePreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstancePreOutcome>>();
    DeleteInstancePreAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteInstancePreRequest&,
        DeleteInstancePreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteRouteOutcome CkafkaClient::DeleteRoute(const DeleteRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRouteResponse rsp = DeleteRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRouteOutcome(rsp);
        else
            return DeleteRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteRouteOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRouteRequest&;
    using Resp = DeleteRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteRouteOutcomeCallable CkafkaClient::DeleteRouteCallable(const DeleteRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRouteOutcome>>();
    DeleteRouteAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteRouteRequest&,
        DeleteRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteRouteTriggerTimeOutcome CkafkaClient::DeleteRouteTriggerTime(const DeleteRouteTriggerTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRouteTriggerTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRouteTriggerTimeResponse rsp = DeleteRouteTriggerTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRouteTriggerTimeOutcome(rsp);
        else
            return DeleteRouteTriggerTimeOutcome(o.GetError());
    }
    else
    {
        return DeleteRouteTriggerTimeOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteRouteTriggerTimeAsync(const DeleteRouteTriggerTimeRequest& request, const DeleteRouteTriggerTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRouteTriggerTimeRequest&;
    using Resp = DeleteRouteTriggerTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRouteTriggerTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteRouteTriggerTimeOutcomeCallable CkafkaClient::DeleteRouteTriggerTimeCallable(const DeleteRouteTriggerTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRouteTriggerTimeOutcome>>();
    DeleteRouteTriggerTimeAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteRouteTriggerTimeRequest&,
        DeleteRouteTriggerTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteTopicOutcome CkafkaClient::DeleteTopic(const DeleteTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicResponse rsp = DeleteTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicOutcome(rsp);
        else
            return DeleteTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicRequest&;
    using Resp = DeleteTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteTopicOutcomeCallable CkafkaClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicOutcome>>();
    DeleteTopicAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteTopicRequest&,
        DeleteTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteTopicIpWhiteListOutcome CkafkaClient::DeleteTopicIpWhiteList(const DeleteTopicIpWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopicIpWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicIpWhiteListResponse rsp = DeleteTopicIpWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicIpWhiteListOutcome(rsp);
        else
            return DeleteTopicIpWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicIpWhiteListOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteTopicIpWhiteListAsync(const DeleteTopicIpWhiteListRequest& request, const DeleteTopicIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicIpWhiteListRequest&;
    using Resp = DeleteTopicIpWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopicIpWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteTopicIpWhiteListOutcomeCallable CkafkaClient::DeleteTopicIpWhiteListCallable(const DeleteTopicIpWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicIpWhiteListOutcome>>();
    DeleteTopicIpWhiteListAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteTopicIpWhiteListRequest&,
        DeleteTopicIpWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DeleteUserOutcome CkafkaClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DeleteUserOutcomeCallable CkafkaClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeACLOutcome CkafkaClient::DescribeACL(const DescribeACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeACLResponse rsp = DescribeACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeACLOutcome(rsp);
        else
            return DescribeACLOutcome(o.GetError());
    }
    else
    {
        return DescribeACLOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeACLAsync(const DescribeACLRequest& request, const DescribeACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeACLRequest&;
    using Resp = DescribeACLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeACL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeACLOutcomeCallable CkafkaClient::DescribeACLCallable(const DescribeACLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeACLOutcome>>();
    DescribeACLAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeACLRequest&,
        DescribeACLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeAclRuleOutcome CkafkaClient::DescribeAclRule(const DescribeAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAclRuleResponse rsp = DescribeAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAclRuleOutcome(rsp);
        else
            return DescribeAclRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeAclRuleOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeAclRuleAsync(const DescribeAclRuleRequest& request, const DescribeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAclRuleRequest&;
    using Resp = DescribeAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeAclRuleOutcomeCallable CkafkaClient::DescribeAclRuleCallable(const DescribeAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAclRuleOutcome>>();
    DescribeAclRuleAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeAclRuleRequest&,
        DescribeAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeCkafkaVersionOutcome CkafkaClient::DescribeCkafkaVersion(const DescribeCkafkaVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCkafkaVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCkafkaVersionResponse rsp = DescribeCkafkaVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCkafkaVersionOutcome(rsp);
        else
            return DescribeCkafkaVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeCkafkaVersionOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeCkafkaVersionAsync(const DescribeCkafkaVersionRequest& request, const DescribeCkafkaVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCkafkaVersionRequest&;
    using Resp = DescribeCkafkaVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCkafkaVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeCkafkaVersionOutcomeCallable CkafkaClient::DescribeCkafkaVersionCallable(const DescribeCkafkaVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCkafkaVersionOutcome>>();
    DescribeCkafkaVersionAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeCkafkaVersionRequest&,
        DescribeCkafkaVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeCkafkaZoneOutcome CkafkaClient::DescribeCkafkaZone(const DescribeCkafkaZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCkafkaZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCkafkaZoneResponse rsp = DescribeCkafkaZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCkafkaZoneOutcome(rsp);
        else
            return DescribeCkafkaZoneOutcome(o.GetError());
    }
    else
    {
        return DescribeCkafkaZoneOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeCkafkaZoneAsync(const DescribeCkafkaZoneRequest& request, const DescribeCkafkaZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCkafkaZoneRequest&;
    using Resp = DescribeCkafkaZoneResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCkafkaZone", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeCkafkaZoneOutcomeCallable CkafkaClient::DescribeCkafkaZoneCallable(const DescribeCkafkaZoneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCkafkaZoneOutcome>>();
    DescribeCkafkaZoneAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeCkafkaZoneRequest&,
        DescribeCkafkaZoneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeConsumerGroupOutcome CkafkaClient::DescribeConsumerGroup(const DescribeConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupResponse rsp = DescribeConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupOutcome(rsp);
        else
            return DescribeConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeConsumerGroupAsync(const DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumerGroupRequest&;
    using Resp = DescribeConsumerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeConsumerGroupOutcomeCallable CkafkaClient::DescribeConsumerGroupCallable(const DescribeConsumerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumerGroupOutcome>>();
    DescribeConsumerGroupAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeConsumerGroupRequest&,
        DescribeConsumerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeCvmInfoOutcome CkafkaClient::DescribeCvmInfo(const DescribeCvmInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCvmInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCvmInfoResponse rsp = DescribeCvmInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCvmInfoOutcome(rsp);
        else
            return DescribeCvmInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCvmInfoOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeCvmInfoAsync(const DescribeCvmInfoRequest& request, const DescribeCvmInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCvmInfoRequest&;
    using Resp = DescribeCvmInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCvmInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeCvmInfoOutcomeCallable CkafkaClient::DescribeCvmInfoCallable(const DescribeCvmInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCvmInfoOutcome>>();
    DescribeCvmInfoAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeCvmInfoRequest&,
        DescribeCvmInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeDatahubTopicOutcome CkafkaClient::DescribeDatahubTopic(const DescribeDatahubTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatahubTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatahubTopicResponse rsp = DescribeDatahubTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatahubTopicOutcome(rsp);
        else
            return DescribeDatahubTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeDatahubTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeDatahubTopicAsync(const DescribeDatahubTopicRequest& request, const DescribeDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatahubTopicRequest&;
    using Resp = DescribeDatahubTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatahubTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeDatahubTopicOutcomeCallable CkafkaClient::DescribeDatahubTopicCallable(const DescribeDatahubTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatahubTopicOutcome>>();
    DescribeDatahubTopicAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeDatahubTopicRequest&,
        DescribeDatahubTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeDatahubTopicsOutcome CkafkaClient::DescribeDatahubTopics(const DescribeDatahubTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatahubTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatahubTopicsResponse rsp = DescribeDatahubTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatahubTopicsOutcome(rsp);
        else
            return DescribeDatahubTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatahubTopicsOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeDatahubTopicsAsync(const DescribeDatahubTopicsRequest& request, const DescribeDatahubTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatahubTopicsRequest&;
    using Resp = DescribeDatahubTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatahubTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeDatahubTopicsOutcomeCallable CkafkaClient::DescribeDatahubTopicsCallable(const DescribeDatahubTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatahubTopicsOutcome>>();
    DescribeDatahubTopicsAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeDatahubTopicsRequest&,
        DescribeDatahubTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeGroupOutcome CkafkaClient::DescribeGroup(const DescribeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupResponse rsp = DescribeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupOutcome(rsp);
        else
            return DescribeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupRequest&;
    using Resp = DescribeGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeGroupOutcomeCallable CkafkaClient::DescribeGroupCallable(const DescribeGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupOutcome>>();
    DescribeGroupAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeGroupRequest&,
        DescribeGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeGroupInfoOutcome CkafkaClient::DescribeGroupInfo(const DescribeGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupInfoResponse rsp = DescribeGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupInfoOutcome(rsp);
        else
            return DescribeGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupInfoOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeGroupInfoAsync(const DescribeGroupInfoRequest& request, const DescribeGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupInfoRequest&;
    using Resp = DescribeGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeGroupInfoOutcomeCallable CkafkaClient::DescribeGroupInfoCallable(const DescribeGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupInfoOutcome>>();
    DescribeGroupInfoAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeGroupInfoRequest&,
        DescribeGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeGroupOffsetsOutcome CkafkaClient::DescribeGroupOffsets(const DescribeGroupOffsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupOffsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupOffsetsResponse rsp = DescribeGroupOffsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupOffsetsOutcome(rsp);
        else
            return DescribeGroupOffsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupOffsetsOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeGroupOffsetsAsync(const DescribeGroupOffsetsRequest& request, const DescribeGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupOffsetsRequest&;
    using Resp = DescribeGroupOffsetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupOffsets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeGroupOffsetsOutcomeCallable CkafkaClient::DescribeGroupOffsetsCallable(const DescribeGroupOffsetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupOffsetsOutcome>>();
    DescribeGroupOffsetsAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeGroupOffsetsRequest&,
        DescribeGroupOffsetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeInstanceAttributesOutcome CkafkaClient::DescribeInstanceAttributes(const DescribeInstanceAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAttributesResponse rsp = DescribeInstanceAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAttributesOutcome(rsp);
        else
            return DescribeInstanceAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeInstanceAttributesAsync(const DescribeInstanceAttributesRequest& request, const DescribeInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceAttributesRequest&;
    using Resp = DescribeInstanceAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeInstanceAttributesOutcomeCallable CkafkaClient::DescribeInstanceAttributesCallable(const DescribeInstanceAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceAttributesOutcome>>();
    DescribeInstanceAttributesAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeInstanceAttributesRequest&,
        DescribeInstanceAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeInstancesOutcome CkafkaClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void CkafkaClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CkafkaClient::DescribeInstancesOutcomeCallable CkafkaClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeInstancesDetailOutcome CkafkaClient::DescribeInstancesDetail(const DescribeInstancesDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDetailResponse rsp = DescribeInstancesDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDetailOutcome(rsp);
        else
            return DescribeInstancesDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDetailOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeInstancesDetailAsync(const DescribeInstancesDetailRequest& request, const DescribeInstancesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesDetailRequest&;
    using Resp = DescribeInstancesDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeInstancesDetailOutcomeCallable CkafkaClient::DescribeInstancesDetailCallable(const DescribeInstancesDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesDetailOutcome>>();
    DescribeInstancesDetailAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeInstancesDetailRequest&,
        DescribeInstancesDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeModifyTypeOutcome CkafkaClient::DescribeModifyType(const DescribeModifyTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModifyType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModifyTypeResponse rsp = DescribeModifyTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModifyTypeOutcome(rsp);
        else
            return DescribeModifyTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeModifyTypeOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeModifyTypeAsync(const DescribeModifyTypeRequest& request, const DescribeModifyTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModifyTypeRequest&;
    using Resp = DescribeModifyTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModifyType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeModifyTypeOutcomeCallable CkafkaClient::DescribeModifyTypeCallable(const DescribeModifyTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModifyTypeOutcome>>();
    DescribeModifyTypeAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeModifyTypeRequest&,
        DescribeModifyTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeRegionOutcome CkafkaClient::DescribeRegion(const DescribeRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionResponse rsp = DescribeRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionOutcome(rsp);
        else
            return DescribeRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeRegionAsync(const DescribeRegionRequest& request, const DescribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRegionRequest&;
    using Resp = DescribeRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeRegionOutcomeCallable CkafkaClient::DescribeRegionCallable(const DescribeRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRegionOutcome>>();
    DescribeRegionAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeRegionRequest&,
        DescribeRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeRouteOutcome CkafkaClient::DescribeRoute(const DescribeRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteResponse rsp = DescribeRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteOutcome(rsp);
        else
            return DescribeRouteOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeRouteAsync(const DescribeRouteRequest& request, const DescribeRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRouteRequest&;
    using Resp = DescribeRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeRouteOutcomeCallable CkafkaClient::DescribeRouteCallable(const DescribeRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRouteOutcome>>();
    DescribeRouteAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeRouteRequest&,
        DescribeRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeSecurityGroupRoutesOutcome CkafkaClient::DescribeSecurityGroupRoutes(const DescribeSecurityGroupRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupRoutesResponse rsp = DescribeSecurityGroupRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupRoutesOutcome(rsp);
        else
            return DescribeSecurityGroupRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupRoutesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeSecurityGroupRoutesAsync(const DescribeSecurityGroupRoutesRequest& request, const DescribeSecurityGroupRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupRoutesRequest&;
    using Resp = DescribeSecurityGroupRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroupRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeSecurityGroupRoutesOutcomeCallable CkafkaClient::DescribeSecurityGroupRoutesCallable(const DescribeSecurityGroupRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupRoutesOutcome>>();
    DescribeSecurityGroupRoutesAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeSecurityGroupRoutesRequest&,
        DescribeSecurityGroupRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeTaskStatusOutcome CkafkaClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskStatusRequest&;
    using Resp = DescribeTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeTaskStatusOutcomeCallable CkafkaClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskStatusOutcome>>();
    DescribeTaskStatusAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeTaskStatusRequest&,
        DescribeTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeTopicOutcome CkafkaClient::DescribeTopic(const DescribeTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicResponse rsp = DescribeTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicOutcome(rsp);
        else
            return DescribeTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicAsync(const DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicRequest&;
    using Resp = DescribeTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeTopicOutcomeCallable CkafkaClient::DescribeTopicCallable(const DescribeTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicOutcome>>();
    DescribeTopicAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeTopicRequest&,
        DescribeTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeTopicAttributesOutcome CkafkaClient::DescribeTopicAttributes(const DescribeTopicAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicAttributesResponse rsp = DescribeTopicAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicAttributesOutcome(rsp);
        else
            return DescribeTopicAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicAttributesAsync(const DescribeTopicAttributesRequest& request, const DescribeTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicAttributesRequest&;
    using Resp = DescribeTopicAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeTopicAttributesOutcomeCallable CkafkaClient::DescribeTopicAttributesCallable(const DescribeTopicAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicAttributesOutcome>>();
    DescribeTopicAttributesAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeTopicAttributesRequest&,
        DescribeTopicAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeTopicDetailOutcome CkafkaClient::DescribeTopicDetail(const DescribeTopicDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicDetailResponse rsp = DescribeTopicDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicDetailOutcome(rsp);
        else
            return DescribeTopicDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicDetailOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicDetailAsync(const DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicDetailRequest&;
    using Resp = DescribeTopicDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeTopicDetailOutcomeCallable CkafkaClient::DescribeTopicDetailCallable(const DescribeTopicDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicDetailOutcome>>();
    DescribeTopicDetailAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeTopicDetailRequest&,
        DescribeTopicDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeTopicProduceConnectionOutcome CkafkaClient::DescribeTopicProduceConnection(const DescribeTopicProduceConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicProduceConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicProduceConnectionResponse rsp = DescribeTopicProduceConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicProduceConnectionOutcome(rsp);
        else
            return DescribeTopicProduceConnectionOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicProduceConnectionOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicProduceConnectionAsync(const DescribeTopicProduceConnectionRequest& request, const DescribeTopicProduceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicProduceConnectionRequest&;
    using Resp = DescribeTopicProduceConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicProduceConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeTopicProduceConnectionOutcomeCallable CkafkaClient::DescribeTopicProduceConnectionCallable(const DescribeTopicProduceConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicProduceConnectionOutcome>>();
    DescribeTopicProduceConnectionAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeTopicProduceConnectionRequest&,
        DescribeTopicProduceConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeTopicSubscribeGroupOutcome CkafkaClient::DescribeTopicSubscribeGroup(const DescribeTopicSubscribeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicSubscribeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicSubscribeGroupResponse rsp = DescribeTopicSubscribeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicSubscribeGroupOutcome(rsp);
        else
            return DescribeTopicSubscribeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicSubscribeGroupOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicSubscribeGroupAsync(const DescribeTopicSubscribeGroupRequest& request, const DescribeTopicSubscribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicSubscribeGroupRequest&;
    using Resp = DescribeTopicSubscribeGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicSubscribeGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeTopicSubscribeGroupOutcomeCallable CkafkaClient::DescribeTopicSubscribeGroupCallable(const DescribeTopicSubscribeGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicSubscribeGroupOutcome>>();
    DescribeTopicSubscribeGroupAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeTopicSubscribeGroupRequest&,
        DescribeTopicSubscribeGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeTopicSyncReplicaOutcome CkafkaClient::DescribeTopicSyncReplica(const DescribeTopicSyncReplicaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicSyncReplica");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicSyncReplicaResponse rsp = DescribeTopicSyncReplicaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicSyncReplicaOutcome(rsp);
        else
            return DescribeTopicSyncReplicaOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicSyncReplicaOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicSyncReplicaAsync(const DescribeTopicSyncReplicaRequest& request, const DescribeTopicSyncReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicSyncReplicaRequest&;
    using Resp = DescribeTopicSyncReplicaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicSyncReplica", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeTopicSyncReplicaOutcomeCallable CkafkaClient::DescribeTopicSyncReplicaCallable(const DescribeTopicSyncReplicaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicSyncReplicaOutcome>>();
    DescribeTopicSyncReplicaAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeTopicSyncReplicaRequest&,
        DescribeTopicSyncReplicaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeTypeInstancesOutcome CkafkaClient::DescribeTypeInstances(const DescribeTypeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTypeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTypeInstancesResponse rsp = DescribeTypeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTypeInstancesOutcome(rsp);
        else
            return DescribeTypeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTypeInstancesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTypeInstancesAsync(const DescribeTypeInstancesRequest& request, const DescribeTypeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTypeInstancesRequest&;
    using Resp = DescribeTypeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTypeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeTypeInstancesOutcomeCallable CkafkaClient::DescribeTypeInstancesCallable(const DescribeTypeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTypeInstancesOutcome>>();
    DescribeTypeInstancesAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeTypeInstancesRequest&,
        DescribeTypeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::DescribeUserOutcome CkafkaClient::DescribeUser(const DescribeUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResponse rsp = DescribeUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserOutcome(rsp);
        else
            return DescribeUserOutcome(o.GetError());
    }
    else
    {
        return DescribeUserOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserRequest&;
    using Resp = DescribeUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::DescribeUserOutcomeCallable CkafkaClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserOutcome>>();
    DescribeUserAsync(
    request,
    [prom](
        const CkafkaClient*,
        const DescribeUserRequest&,
        DescribeUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::FetchMessageByOffsetOutcome CkafkaClient::FetchMessageByOffset(const FetchMessageByOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "FetchMessageByOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchMessageByOffsetResponse rsp = FetchMessageByOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchMessageByOffsetOutcome(rsp);
        else
            return FetchMessageByOffsetOutcome(o.GetError());
    }
    else
    {
        return FetchMessageByOffsetOutcome(outcome.GetError());
    }
}

void CkafkaClient::FetchMessageByOffsetAsync(const FetchMessageByOffsetRequest& request, const FetchMessageByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FetchMessageByOffsetRequest&;
    using Resp = FetchMessageByOffsetResponse;

    DoRequestAsync<Req, Resp>(
        "FetchMessageByOffset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::FetchMessageByOffsetOutcomeCallable CkafkaClient::FetchMessageByOffsetCallable(const FetchMessageByOffsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<FetchMessageByOffsetOutcome>>();
    FetchMessageByOffsetAsync(
    request,
    [prom](
        const CkafkaClient*,
        const FetchMessageByOffsetRequest&,
        FetchMessageByOffsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::FetchMessageListByOffsetOutcome CkafkaClient::FetchMessageListByOffset(const FetchMessageListByOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "FetchMessageListByOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchMessageListByOffsetResponse rsp = FetchMessageListByOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchMessageListByOffsetOutcome(rsp);
        else
            return FetchMessageListByOffsetOutcome(o.GetError());
    }
    else
    {
        return FetchMessageListByOffsetOutcome(outcome.GetError());
    }
}

void CkafkaClient::FetchMessageListByOffsetAsync(const FetchMessageListByOffsetRequest& request, const FetchMessageListByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FetchMessageListByOffsetRequest&;
    using Resp = FetchMessageListByOffsetResponse;

    DoRequestAsync<Req, Resp>(
        "FetchMessageListByOffset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::FetchMessageListByOffsetOutcomeCallable CkafkaClient::FetchMessageListByOffsetCallable(const FetchMessageListByOffsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<FetchMessageListByOffsetOutcome>>();
    FetchMessageListByOffsetAsync(
    request,
    [prom](
        const CkafkaClient*,
        const FetchMessageListByOffsetRequest&,
        FetchMessageListByOffsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::FetchMessageListByTimestampOutcome CkafkaClient::FetchMessageListByTimestamp(const FetchMessageListByTimestampRequest &request)
{
    auto outcome = MakeRequest(request, "FetchMessageListByTimestamp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchMessageListByTimestampResponse rsp = FetchMessageListByTimestampResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchMessageListByTimestampOutcome(rsp);
        else
            return FetchMessageListByTimestampOutcome(o.GetError());
    }
    else
    {
        return FetchMessageListByTimestampOutcome(outcome.GetError());
    }
}

void CkafkaClient::FetchMessageListByTimestampAsync(const FetchMessageListByTimestampRequest& request, const FetchMessageListByTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FetchMessageListByTimestampRequest&;
    using Resp = FetchMessageListByTimestampResponse;

    DoRequestAsync<Req, Resp>(
        "FetchMessageListByTimestamp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::FetchMessageListByTimestampOutcomeCallable CkafkaClient::FetchMessageListByTimestampCallable(const FetchMessageListByTimestampRequest &request)
{
    const auto prom = std::make_shared<std::promise<FetchMessageListByTimestampOutcome>>();
    FetchMessageListByTimestampAsync(
    request,
    [prom](
        const CkafkaClient*,
        const FetchMessageListByTimestampRequest&,
        FetchMessageListByTimestampOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::InquireCkafkaPriceOutcome CkafkaClient::InquireCkafkaPrice(const InquireCkafkaPriceRequest &request)
{
    auto outcome = MakeRequest(request, "InquireCkafkaPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquireCkafkaPriceResponse rsp = InquireCkafkaPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquireCkafkaPriceOutcome(rsp);
        else
            return InquireCkafkaPriceOutcome(o.GetError());
    }
    else
    {
        return InquireCkafkaPriceOutcome(outcome.GetError());
    }
}

void CkafkaClient::InquireCkafkaPriceAsync(const InquireCkafkaPriceRequest& request, const InquireCkafkaPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquireCkafkaPriceRequest&;
    using Resp = InquireCkafkaPriceResponse;

    DoRequestAsync<Req, Resp>(
        "InquireCkafkaPrice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::InquireCkafkaPriceOutcomeCallable CkafkaClient::InquireCkafkaPriceCallable(const InquireCkafkaPriceRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquireCkafkaPriceOutcome>>();
    InquireCkafkaPriceAsync(
    request,
    [prom](
        const CkafkaClient*,
        const InquireCkafkaPriceRequest&,
        InquireCkafkaPriceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::InstanceScalingDownOutcome CkafkaClient::InstanceScalingDown(const InstanceScalingDownRequest &request)
{
    auto outcome = MakeRequest(request, "InstanceScalingDown");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstanceScalingDownResponse rsp = InstanceScalingDownResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstanceScalingDownOutcome(rsp);
        else
            return InstanceScalingDownOutcome(o.GetError());
    }
    else
    {
        return InstanceScalingDownOutcome(outcome.GetError());
    }
}

void CkafkaClient::InstanceScalingDownAsync(const InstanceScalingDownRequest& request, const InstanceScalingDownAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstanceScalingDownRequest&;
    using Resp = InstanceScalingDownResponse;

    DoRequestAsync<Req, Resp>(
        "InstanceScalingDown", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::InstanceScalingDownOutcomeCallable CkafkaClient::InstanceScalingDownCallable(const InstanceScalingDownRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstanceScalingDownOutcome>>();
    InstanceScalingDownAsync(
    request,
    [prom](
        const CkafkaClient*,
        const InstanceScalingDownRequest&,
        InstanceScalingDownOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::ModifyAclRuleOutcome CkafkaClient::ModifyAclRule(const ModifyAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAclRuleResponse rsp = ModifyAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAclRuleOutcome(rsp);
        else
            return ModifyAclRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAclRuleOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyAclRuleAsync(const ModifyAclRuleRequest& request, const ModifyAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAclRuleRequest&;
    using Resp = ModifyAclRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAclRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::ModifyAclRuleOutcomeCallable CkafkaClient::ModifyAclRuleCallable(const ModifyAclRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAclRuleOutcome>>();
    ModifyAclRuleAsync(
    request,
    [prom](
        const CkafkaClient*,
        const ModifyAclRuleRequest&,
        ModifyAclRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::ModifyDatahubTopicOutcome CkafkaClient::ModifyDatahubTopic(const ModifyDatahubTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatahubTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatahubTopicResponse rsp = ModifyDatahubTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatahubTopicOutcome(rsp);
        else
            return ModifyDatahubTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyDatahubTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyDatahubTopicAsync(const ModifyDatahubTopicRequest& request, const ModifyDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatahubTopicRequest&;
    using Resp = ModifyDatahubTopicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatahubTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::ModifyDatahubTopicOutcomeCallable CkafkaClient::ModifyDatahubTopicCallable(const ModifyDatahubTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatahubTopicOutcome>>();
    ModifyDatahubTopicAsync(
    request,
    [prom](
        const CkafkaClient*,
        const ModifyDatahubTopicRequest&,
        ModifyDatahubTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::ModifyGroupOffsetsOutcome CkafkaClient::ModifyGroupOffsets(const ModifyGroupOffsetsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGroupOffsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGroupOffsetsResponse rsp = ModifyGroupOffsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGroupOffsetsOutcome(rsp);
        else
            return ModifyGroupOffsetsOutcome(o.GetError());
    }
    else
    {
        return ModifyGroupOffsetsOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyGroupOffsetsAsync(const ModifyGroupOffsetsRequest& request, const ModifyGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGroupOffsetsRequest&;
    using Resp = ModifyGroupOffsetsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGroupOffsets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::ModifyGroupOffsetsOutcomeCallable CkafkaClient::ModifyGroupOffsetsCallable(const ModifyGroupOffsetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGroupOffsetsOutcome>>();
    ModifyGroupOffsetsAsync(
    request,
    [prom](
        const CkafkaClient*,
        const ModifyGroupOffsetsRequest&,
        ModifyGroupOffsetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::ModifyInstanceAttributesOutcome CkafkaClient::ModifyInstanceAttributes(const ModifyInstanceAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceAttributesResponse rsp = ModifyInstanceAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceAttributesOutcome(rsp);
        else
            return ModifyInstanceAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyInstanceAttributesAsync(const ModifyInstanceAttributesRequest& request, const ModifyInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceAttributesRequest&;
    using Resp = ModifyInstanceAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::ModifyInstanceAttributesOutcomeCallable CkafkaClient::ModifyInstanceAttributesCallable(const ModifyInstanceAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceAttributesOutcome>>();
    ModifyInstanceAttributesAsync(
    request,
    [prom](
        const CkafkaClient*,
        const ModifyInstanceAttributesRequest&,
        ModifyInstanceAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::ModifyInstancePreOutcome CkafkaClient::ModifyInstancePre(const ModifyInstancePreRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancePre");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancePreResponse rsp = ModifyInstancePreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancePreOutcome(rsp);
        else
            return ModifyInstancePreOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancePreOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyInstancePreAsync(const ModifyInstancePreRequest& request, const ModifyInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstancePreRequest&;
    using Resp = ModifyInstancePreResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstancePre", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::ModifyInstancePreOutcomeCallable CkafkaClient::ModifyInstancePreCallable(const ModifyInstancePreRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstancePreOutcome>>();
    ModifyInstancePreAsync(
    request,
    [prom](
        const CkafkaClient*,
        const ModifyInstancePreRequest&,
        ModifyInstancePreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::ModifyPasswordOutcome CkafkaClient::ModifyPassword(const ModifyPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPasswordResponse rsp = ModifyPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPasswordOutcome(rsp);
        else
            return ModifyPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyPasswordOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyPasswordAsync(const ModifyPasswordRequest& request, const ModifyPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPasswordRequest&;
    using Resp = ModifyPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::ModifyPasswordOutcomeCallable CkafkaClient::ModifyPasswordCallable(const ModifyPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPasswordOutcome>>();
    ModifyPasswordAsync(
    request,
    [prom](
        const CkafkaClient*,
        const ModifyPasswordRequest&,
        ModifyPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::ModifyRoutineMaintenanceTaskOutcome CkafkaClient::ModifyRoutineMaintenanceTask(const ModifyRoutineMaintenanceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoutineMaintenanceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoutineMaintenanceTaskResponse rsp = ModifyRoutineMaintenanceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoutineMaintenanceTaskOutcome(rsp);
        else
            return ModifyRoutineMaintenanceTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyRoutineMaintenanceTaskOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyRoutineMaintenanceTaskAsync(const ModifyRoutineMaintenanceTaskRequest& request, const ModifyRoutineMaintenanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRoutineMaintenanceTaskRequest&;
    using Resp = ModifyRoutineMaintenanceTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRoutineMaintenanceTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::ModifyRoutineMaintenanceTaskOutcomeCallable CkafkaClient::ModifyRoutineMaintenanceTaskCallable(const ModifyRoutineMaintenanceTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRoutineMaintenanceTaskOutcome>>();
    ModifyRoutineMaintenanceTaskAsync(
    request,
    [prom](
        const CkafkaClient*,
        const ModifyRoutineMaintenanceTaskRequest&,
        ModifyRoutineMaintenanceTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::ModifyTopicAttributesOutcome CkafkaClient::ModifyTopicAttributes(const ModifyTopicAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopicAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicAttributesResponse rsp = ModifyTopicAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicAttributesOutcome(rsp);
        else
            return ModifyTopicAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyTopicAttributesAsync(const ModifyTopicAttributesRequest& request, const ModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTopicAttributesRequest&;
    using Resp = ModifyTopicAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTopicAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::ModifyTopicAttributesOutcomeCallable CkafkaClient::ModifyTopicAttributesCallable(const ModifyTopicAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTopicAttributesOutcome>>();
    ModifyTopicAttributesAsync(
    request,
    [prom](
        const CkafkaClient*,
        const ModifyTopicAttributesRequest&,
        ModifyTopicAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::SendMessageOutcome CkafkaClient::SendMessage(const SendMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendMessageResponse rsp = SendMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendMessageOutcome(rsp);
        else
            return SendMessageOutcome(o.GetError());
    }
    else
    {
        return SendMessageOutcome(outcome.GetError());
    }
}

void CkafkaClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendMessageRequest&;
    using Resp = SendMessageResponse;

    DoRequestAsync<Req, Resp>(
        "SendMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::SendMessageOutcomeCallable CkafkaClient::SendMessageCallable(const SendMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendMessageOutcome>>();
    SendMessageAsync(
    request,
    [prom](
        const CkafkaClient*,
        const SendMessageRequest&,
        SendMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CkafkaClient::UpgradeBrokerVersionOutcome CkafkaClient::UpgradeBrokerVersion(const UpgradeBrokerVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeBrokerVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeBrokerVersionResponse rsp = UpgradeBrokerVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeBrokerVersionOutcome(rsp);
        else
            return UpgradeBrokerVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeBrokerVersionOutcome(outcome.GetError());
    }
}

void CkafkaClient::UpgradeBrokerVersionAsync(const UpgradeBrokerVersionRequest& request, const UpgradeBrokerVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeBrokerVersionRequest&;
    using Resp = UpgradeBrokerVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeBrokerVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CkafkaClient::UpgradeBrokerVersionOutcomeCallable CkafkaClient::UpgradeBrokerVersionCallable(const UpgradeBrokerVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeBrokerVersionOutcome>>();
    UpgradeBrokerVersionAsync(
    request,
    [prom](
        const CkafkaClient*,
        const UpgradeBrokerVersionRequest&,
        UpgradeBrokerVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


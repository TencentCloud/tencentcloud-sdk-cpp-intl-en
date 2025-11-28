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

#include <tencentcloud/mongodb/v20190725/MongodbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mongodb::V20190725;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-25";
    const string ENDPOINT = "mongodb.intl.tencentcloudapi.com";
}

MongodbClient::MongodbClient(const Credential &credential, const string &region) :
    MongodbClient(credential, region, ClientProfile())
{
}

MongodbClient::MongodbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MongodbClient::AssignProjectOutcome MongodbClient::AssignProject(const AssignProjectRequest &request)
{
    auto outcome = MakeRequest(request, "AssignProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssignProjectResponse rsp = AssignProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssignProjectOutcome(rsp);
        else
            return AssignProjectOutcome(o.GetError());
    }
    else
    {
        return AssignProjectOutcome(outcome.GetError());
    }
}

void MongodbClient::AssignProjectAsync(const AssignProjectRequest& request, const AssignProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssignProjectRequest&;
    using Resp = AssignProjectResponse;

    DoRequestAsync<Req, Resp>(
        "AssignProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::AssignProjectOutcomeCallable MongodbClient::AssignProjectCallable(const AssignProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssignProjectOutcome>>();
    AssignProjectAsync(
    request,
    [prom](
        const MongodbClient*,
        const AssignProjectRequest&,
        AssignProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::CreateBackupDBInstanceOutcome MongodbClient::CreateBackupDBInstance(const CreateBackupDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupDBInstanceResponse rsp = CreateBackupDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupDBInstanceOutcome(rsp);
        else
            return CreateBackupDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateBackupDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateBackupDBInstanceAsync(const CreateBackupDBInstanceRequest& request, const CreateBackupDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupDBInstanceRequest&;
    using Resp = CreateBackupDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::CreateBackupDBInstanceOutcomeCallable MongodbClient::CreateBackupDBInstanceCallable(const CreateBackupDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupDBInstanceOutcome>>();
    CreateBackupDBInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const CreateBackupDBInstanceRequest&,
        CreateBackupDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::CreateBackupDownloadTaskOutcome MongodbClient::CreateBackupDownloadTask(const CreateBackupDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupDownloadTaskResponse rsp = CreateBackupDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupDownloadTaskOutcome(rsp);
        else
            return CreateBackupDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return CreateBackupDownloadTaskOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateBackupDownloadTaskAsync(const CreateBackupDownloadTaskRequest& request, const CreateBackupDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupDownloadTaskRequest&;
    using Resp = CreateBackupDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::CreateBackupDownloadTaskOutcomeCallable MongodbClient::CreateBackupDownloadTaskCallable(const CreateBackupDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupDownloadTaskOutcome>>();
    CreateBackupDownloadTaskAsync(
    request,
    [prom](
        const MongodbClient*,
        const CreateBackupDownloadTaskRequest&,
        CreateBackupDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::CreateDBInstanceOutcome MongodbClient::CreateDBInstance(const CreateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceResponse rsp = CreateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceOutcome(rsp);
        else
            return CreateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateDBInstanceAsync(const CreateDBInstanceRequest& request, const CreateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBInstanceRequest&;
    using Resp = CreateDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::CreateDBInstanceOutcomeCallable MongodbClient::CreateDBInstanceCallable(const CreateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstanceOutcome>>();
    CreateDBInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const CreateDBInstanceRequest&,
        CreateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::CreateDBInstanceHourOutcome MongodbClient::CreateDBInstanceHour(const CreateDBInstanceHourRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBInstanceHour");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBInstanceHourResponse rsp = CreateDBInstanceHourResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBInstanceHourOutcome(rsp);
        else
            return CreateDBInstanceHourOutcome(o.GetError());
    }
    else
    {
        return CreateDBInstanceHourOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateDBInstanceHourAsync(const CreateDBInstanceHourRequest& request, const CreateDBInstanceHourAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBInstanceHourRequest&;
    using Resp = CreateDBInstanceHourResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBInstanceHour", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::CreateDBInstanceHourOutcomeCallable MongodbClient::CreateDBInstanceHourCallable(const CreateDBInstanceHourRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBInstanceHourOutcome>>();
    CreateDBInstanceHourAsync(
    request,
    [prom](
        const MongodbClient*,
        const CreateDBInstanceHourRequest&,
        CreateDBInstanceHourOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::CreateLogDownloadTaskOutcome MongodbClient::CreateLogDownloadTask(const CreateLogDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogDownloadTaskResponse rsp = CreateLogDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogDownloadTaskOutcome(rsp);
        else
            return CreateLogDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return CreateLogDownloadTaskOutcome(outcome.GetError());
    }
}

void MongodbClient::CreateLogDownloadTaskAsync(const CreateLogDownloadTaskRequest& request, const CreateLogDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLogDownloadTaskRequest&;
    using Resp = CreateLogDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLogDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::CreateLogDownloadTaskOutcomeCallable MongodbClient::CreateLogDownloadTaskCallable(const CreateLogDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLogDownloadTaskOutcome>>();
    CreateLogDownloadTaskAsync(
    request,
    [prom](
        const MongodbClient*,
        const CreateLogDownloadTaskRequest&,
        CreateLogDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DeleteLogDownloadTaskOutcome MongodbClient::DeleteLogDownloadTask(const DeleteLogDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogDownloadTaskResponse rsp = DeleteLogDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogDownloadTaskOutcome(rsp);
        else
            return DeleteLogDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteLogDownloadTaskOutcome(outcome.GetError());
    }
}

void MongodbClient::DeleteLogDownloadTaskAsync(const DeleteLogDownloadTaskRequest& request, const DeleteLogDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLogDownloadTaskRequest&;
    using Resp = DeleteLogDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLogDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DeleteLogDownloadTaskOutcomeCallable MongodbClient::DeleteLogDownloadTaskCallable(const DeleteLogDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLogDownloadTaskOutcome>>();
    DeleteLogDownloadTaskAsync(
    request,
    [prom](
        const MongodbClient*,
        const DeleteLogDownloadTaskRequest&,
        DeleteLogDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeAsyncRequestInfoOutcome MongodbClient::DescribeAsyncRequestInfo(const DescribeAsyncRequestInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncRequestInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncRequestInfoResponse rsp = DescribeAsyncRequestInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncRequestInfoOutcome(rsp);
        else
            return DescribeAsyncRequestInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncRequestInfoOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeAsyncRequestInfoAsync(const DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAsyncRequestInfoRequest&;
    using Resp = DescribeAsyncRequestInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAsyncRequestInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeAsyncRequestInfoOutcomeCallable MongodbClient::DescribeAsyncRequestInfoCallable(const DescribeAsyncRequestInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAsyncRequestInfoOutcome>>();
    DescribeAsyncRequestInfoAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeAsyncRequestInfoRequest&,
        DescribeAsyncRequestInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeBackupDownloadTaskOutcome MongodbClient::DescribeBackupDownloadTask(const DescribeBackupDownloadTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupDownloadTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupDownloadTaskResponse rsp = DescribeBackupDownloadTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupDownloadTaskOutcome(rsp);
        else
            return DescribeBackupDownloadTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupDownloadTaskOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeBackupDownloadTaskAsync(const DescribeBackupDownloadTaskRequest& request, const DescribeBackupDownloadTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupDownloadTaskRequest&;
    using Resp = DescribeBackupDownloadTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupDownloadTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeBackupDownloadTaskOutcomeCallable MongodbClient::DescribeBackupDownloadTaskCallable(const DescribeBackupDownloadTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupDownloadTaskOutcome>>();
    DescribeBackupDownloadTaskAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeBackupDownloadTaskRequest&,
        DescribeBackupDownloadTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeClientConnectionsOutcome MongodbClient::DescribeClientConnections(const DescribeClientConnectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientConnections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientConnectionsResponse rsp = DescribeClientConnectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientConnectionsOutcome(rsp);
        else
            return DescribeClientConnectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeClientConnectionsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeClientConnectionsAsync(const DescribeClientConnectionsRequest& request, const DescribeClientConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClientConnectionsRequest&;
    using Resp = DescribeClientConnectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientConnections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeClientConnectionsOutcomeCallable MongodbClient::DescribeClientConnectionsCallable(const DescribeClientConnectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientConnectionsOutcome>>();
    DescribeClientConnectionsAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeClientConnectionsRequest&,
        DescribeClientConnectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeDBBackupsOutcome MongodbClient::DescribeDBBackups(const DescribeDBBackupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBBackups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBBackupsResponse rsp = DescribeDBBackupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBBackupsOutcome(rsp);
        else
            return DescribeDBBackupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDBBackupsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDBBackupsAsync(const DescribeDBBackupsRequest& request, const DescribeDBBackupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBBackupsRequest&;
    using Resp = DescribeDBBackupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBBackups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeDBBackupsOutcomeCallable MongodbClient::DescribeDBBackupsCallable(const DescribeDBBackupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBBackupsOutcome>>();
    DescribeDBBackupsAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeDBBackupsRequest&,
        DescribeDBBackupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeDBInstanceDealOutcome MongodbClient::DescribeDBInstanceDeal(const DescribeDBInstanceDealRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceDeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceDealResponse rsp = DescribeDBInstanceDealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceDealOutcome(rsp);
        else
            return DescribeDBInstanceDealOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceDealOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDBInstanceDealAsync(const DescribeDBInstanceDealRequest& request, const DescribeDBInstanceDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceDealRequest&;
    using Resp = DescribeDBInstanceDealResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceDeal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeDBInstanceDealOutcomeCallable MongodbClient::DescribeDBInstanceDealCallable(const DescribeDBInstanceDealRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceDealOutcome>>();
    DescribeDBInstanceDealAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeDBInstanceDealRequest&,
        DescribeDBInstanceDealOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeDBInstanceNamespaceOutcome MongodbClient::DescribeDBInstanceNamespace(const DescribeDBInstanceNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceNamespaceResponse rsp = DescribeDBInstanceNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceNamespaceOutcome(rsp);
        else
            return DescribeDBInstanceNamespaceOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceNamespaceOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDBInstanceNamespaceAsync(const DescribeDBInstanceNamespaceRequest& request, const DescribeDBInstanceNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceNamespaceRequest&;
    using Resp = DescribeDBInstanceNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeDBInstanceNamespaceOutcomeCallable MongodbClient::DescribeDBInstanceNamespaceCallable(const DescribeDBInstanceNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceNamespaceOutcome>>();
    DescribeDBInstanceNamespaceAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeDBInstanceNamespaceRequest&,
        DescribeDBInstanceNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeDBInstanceNodePropertyOutcome MongodbClient::DescribeDBInstanceNodeProperty(const DescribeDBInstanceNodePropertyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstanceNodeProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstanceNodePropertyResponse rsp = DescribeDBInstanceNodePropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstanceNodePropertyOutcome(rsp);
        else
            return DescribeDBInstanceNodePropertyOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstanceNodePropertyOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDBInstanceNodePropertyAsync(const DescribeDBInstanceNodePropertyRequest& request, const DescribeDBInstanceNodePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstanceNodePropertyRequest&;
    using Resp = DescribeDBInstanceNodePropertyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstanceNodeProperty", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeDBInstanceNodePropertyOutcomeCallable MongodbClient::DescribeDBInstanceNodePropertyCallable(const DescribeDBInstanceNodePropertyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstanceNodePropertyOutcome>>();
    DescribeDBInstanceNodePropertyAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeDBInstanceNodePropertyRequest&,
        DescribeDBInstanceNodePropertyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeDBInstancesOutcome MongodbClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesResponse rsp = DescribeDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesOutcome(rsp);
        else
            return DescribeDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstancesRequest&;
    using Resp = DescribeDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeDBInstancesOutcomeCallable MongodbClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesOutcome>>();
    DescribeDBInstancesAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeDBInstancesRequest&,
        DescribeDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeDetailedSlowLogsOutcome MongodbClient::DescribeDetailedSlowLogs(const DescribeDetailedSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDetailedSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDetailedSlowLogsResponse rsp = DescribeDetailedSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDetailedSlowLogsOutcome(rsp);
        else
            return DescribeDetailedSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeDetailedSlowLogsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeDetailedSlowLogsAsync(const DescribeDetailedSlowLogsRequest& request, const DescribeDetailedSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDetailedSlowLogsRequest&;
    using Resp = DescribeDetailedSlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDetailedSlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeDetailedSlowLogsOutcomeCallable MongodbClient::DescribeDetailedSlowLogsCallable(const DescribeDetailedSlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDetailedSlowLogsOutcome>>();
    DescribeDetailedSlowLogsAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeDetailedSlowLogsRequest&,
        DescribeDetailedSlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeInstanceParamsOutcome MongodbClient::DescribeInstanceParams(const DescribeInstanceParamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceParamsResponse rsp = DescribeInstanceParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceParamsOutcome(rsp);
        else
            return DescribeInstanceParamsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceParamsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeInstanceParamsAsync(const DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceParamsRequest&;
    using Resp = DescribeInstanceParamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeInstanceParamsOutcomeCallable MongodbClient::DescribeInstanceParamsCallable(const DescribeInstanceParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceParamsOutcome>>();
    DescribeInstanceParamsAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeInstanceParamsRequest&,
        DescribeInstanceParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeInstanceSSLOutcome MongodbClient::DescribeInstanceSSL(const DescribeInstanceSSLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceSSLResponse rsp = DescribeInstanceSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceSSLOutcome(rsp);
        else
            return DescribeInstanceSSLOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceSSLOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeInstanceSSLAsync(const DescribeInstanceSSLRequest& request, const DescribeInstanceSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceSSLRequest&;
    using Resp = DescribeInstanceSSLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceSSL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeInstanceSSLOutcomeCallable MongodbClient::DescribeInstanceSSLCallable(const DescribeInstanceSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceSSLOutcome>>();
    DescribeInstanceSSLAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeInstanceSSLRequest&,
        DescribeInstanceSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeLogDownloadTasksOutcome MongodbClient::DescribeLogDownloadTasks(const DescribeLogDownloadTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogDownloadTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogDownloadTasksResponse rsp = DescribeLogDownloadTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogDownloadTasksOutcome(rsp);
        else
            return DescribeLogDownloadTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeLogDownloadTasksOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeLogDownloadTasksAsync(const DescribeLogDownloadTasksRequest& request, const DescribeLogDownloadTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogDownloadTasksRequest&;
    using Resp = DescribeLogDownloadTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogDownloadTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeLogDownloadTasksOutcomeCallable MongodbClient::DescribeLogDownloadTasksCallable(const DescribeLogDownloadTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogDownloadTasksOutcome>>();
    DescribeLogDownloadTasksAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeLogDownloadTasksRequest&,
        DescribeLogDownloadTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeMongodbLogsOutcome MongodbClient::DescribeMongodbLogs(const DescribeMongodbLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMongodbLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMongodbLogsResponse rsp = DescribeMongodbLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMongodbLogsOutcome(rsp);
        else
            return DescribeMongodbLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeMongodbLogsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeMongodbLogsAsync(const DescribeMongodbLogsRequest& request, const DescribeMongodbLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMongodbLogsRequest&;
    using Resp = DescribeMongodbLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMongodbLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeMongodbLogsOutcomeCallable MongodbClient::DescribeMongodbLogsCallable(const DescribeMongodbLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMongodbLogsOutcome>>();
    DescribeMongodbLogsAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeMongodbLogsRequest&,
        DescribeMongodbLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeSecurityGroupOutcome MongodbClient::DescribeSecurityGroup(const DescribeSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupResponse rsp = DescribeSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupOutcome(rsp);
        else
            return DescribeSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSecurityGroupAsync(const DescribeSecurityGroupRequest& request, const DescribeSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityGroupRequest&;
    using Resp = DescribeSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeSecurityGroupOutcomeCallable MongodbClient::DescribeSecurityGroupCallable(const DescribeSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityGroupOutcome>>();
    DescribeSecurityGroupAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeSecurityGroupRequest&,
        DescribeSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeSlowLogPatternsOutcome MongodbClient::DescribeSlowLogPatterns(const DescribeSlowLogPatternsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogPatterns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogPatternsResponse rsp = DescribeSlowLogPatternsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogPatternsOutcome(rsp);
        else
            return DescribeSlowLogPatternsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogPatternsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSlowLogPatternsAsync(const DescribeSlowLogPatternsRequest& request, const DescribeSlowLogPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowLogPatternsRequest&;
    using Resp = DescribeSlowLogPatternsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogPatterns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeSlowLogPatternsOutcomeCallable MongodbClient::DescribeSlowLogPatternsCallable(const DescribeSlowLogPatternsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogPatternsOutcome>>();
    DescribeSlowLogPatternsAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeSlowLogPatternsRequest&,
        DescribeSlowLogPatternsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeSlowLogsOutcome MongodbClient::DescribeSlowLogs(const DescribeSlowLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowLogsResponse rsp = DescribeSlowLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowLogsOutcome(rsp);
        else
            return DescribeSlowLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowLogsOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSlowLogsAsync(const DescribeSlowLogsRequest& request, const DescribeSlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowLogsRequest&;
    using Resp = DescribeSlowLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeSlowLogsOutcomeCallable MongodbClient::DescribeSlowLogsCallable(const DescribeSlowLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowLogsOutcome>>();
    DescribeSlowLogsAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeSlowLogsRequest&,
        DescribeSlowLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::DescribeSpecInfoOutcome MongodbClient::DescribeSpecInfo(const DescribeSpecInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpecInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecInfoResponse rsp = DescribeSpecInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecInfoOutcome(rsp);
        else
            return DescribeSpecInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecInfoOutcome(outcome.GetError());
    }
}

void MongodbClient::DescribeSpecInfoAsync(const DescribeSpecInfoRequest& request, const DescribeSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpecInfoRequest&;
    using Resp = DescribeSpecInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpecInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::DescribeSpecInfoOutcomeCallable MongodbClient::DescribeSpecInfoCallable(const DescribeSpecInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpecInfoOutcome>>();
    DescribeSpecInfoAsync(
    request,
    [prom](
        const MongodbClient*,
        const DescribeSpecInfoRequest&,
        DescribeSpecInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::FlushInstanceRouterConfigOutcome MongodbClient::FlushInstanceRouterConfig(const FlushInstanceRouterConfigRequest &request)
{
    auto outcome = MakeRequest(request, "FlushInstanceRouterConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FlushInstanceRouterConfigResponse rsp = FlushInstanceRouterConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FlushInstanceRouterConfigOutcome(rsp);
        else
            return FlushInstanceRouterConfigOutcome(o.GetError());
    }
    else
    {
        return FlushInstanceRouterConfigOutcome(outcome.GetError());
    }
}

void MongodbClient::FlushInstanceRouterConfigAsync(const FlushInstanceRouterConfigRequest& request, const FlushInstanceRouterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FlushInstanceRouterConfigRequest&;
    using Resp = FlushInstanceRouterConfigResponse;

    DoRequestAsync<Req, Resp>(
        "FlushInstanceRouterConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::FlushInstanceRouterConfigOutcomeCallable MongodbClient::FlushInstanceRouterConfigCallable(const FlushInstanceRouterConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<FlushInstanceRouterConfigOutcome>>();
    FlushInstanceRouterConfigAsync(
    request,
    [prom](
        const MongodbClient*,
        const FlushInstanceRouterConfigRequest&,
        FlushInstanceRouterConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::InquirePriceCreateDBInstancesOutcome MongodbClient::InquirePriceCreateDBInstances(const InquirePriceCreateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceCreateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceCreateDBInstancesResponse rsp = InquirePriceCreateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceCreateDBInstancesOutcome(rsp);
        else
            return InquirePriceCreateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceCreateDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::InquirePriceCreateDBInstancesAsync(const InquirePriceCreateDBInstancesRequest& request, const InquirePriceCreateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceCreateDBInstancesRequest&;
    using Resp = InquirePriceCreateDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceCreateDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::InquirePriceCreateDBInstancesOutcomeCallable MongodbClient::InquirePriceCreateDBInstancesCallable(const InquirePriceCreateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceCreateDBInstancesOutcome>>();
    InquirePriceCreateDBInstancesAsync(
    request,
    [prom](
        const MongodbClient*,
        const InquirePriceCreateDBInstancesRequest&,
        InquirePriceCreateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::InquirePriceModifyDBInstanceSpecOutcome MongodbClient::InquirePriceModifyDBInstanceSpec(const InquirePriceModifyDBInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceModifyDBInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceModifyDBInstanceSpecResponse rsp = InquirePriceModifyDBInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceModifyDBInstanceSpecOutcome(rsp);
        else
            return InquirePriceModifyDBInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return InquirePriceModifyDBInstanceSpecOutcome(outcome.GetError());
    }
}

void MongodbClient::InquirePriceModifyDBInstanceSpecAsync(const InquirePriceModifyDBInstanceSpecRequest& request, const InquirePriceModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceModifyDBInstanceSpecRequest&;
    using Resp = InquirePriceModifyDBInstanceSpecResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceModifyDBInstanceSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::InquirePriceModifyDBInstanceSpecOutcomeCallable MongodbClient::InquirePriceModifyDBInstanceSpecCallable(const InquirePriceModifyDBInstanceSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceModifyDBInstanceSpecOutcome>>();
    InquirePriceModifyDBInstanceSpecAsync(
    request,
    [prom](
        const MongodbClient*,
        const InquirePriceModifyDBInstanceSpecRequest&,
        InquirePriceModifyDBInstanceSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::InquirePriceRenewDBInstancesOutcome MongodbClient::InquirePriceRenewDBInstances(const InquirePriceRenewDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "InquirePriceRenewDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquirePriceRenewDBInstancesResponse rsp = InquirePriceRenewDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquirePriceRenewDBInstancesOutcome(rsp);
        else
            return InquirePriceRenewDBInstancesOutcome(o.GetError());
    }
    else
    {
        return InquirePriceRenewDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::InquirePriceRenewDBInstancesAsync(const InquirePriceRenewDBInstancesRequest& request, const InquirePriceRenewDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquirePriceRenewDBInstancesRequest&;
    using Resp = InquirePriceRenewDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "InquirePriceRenewDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::InquirePriceRenewDBInstancesOutcomeCallable MongodbClient::InquirePriceRenewDBInstancesCallable(const InquirePriceRenewDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquirePriceRenewDBInstancesOutcome>>();
    InquirePriceRenewDBInstancesAsync(
    request,
    [prom](
        const MongodbClient*,
        const InquirePriceRenewDBInstancesRequest&,
        InquirePriceRenewDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::InstanceEnableSSLOutcome MongodbClient::InstanceEnableSSL(const InstanceEnableSSLRequest &request)
{
    auto outcome = MakeRequest(request, "InstanceEnableSSL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstanceEnableSSLResponse rsp = InstanceEnableSSLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstanceEnableSSLOutcome(rsp);
        else
            return InstanceEnableSSLOutcome(o.GetError());
    }
    else
    {
        return InstanceEnableSSLOutcome(outcome.GetError());
    }
}

void MongodbClient::InstanceEnableSSLAsync(const InstanceEnableSSLRequest& request, const InstanceEnableSSLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InstanceEnableSSLRequest&;
    using Resp = InstanceEnableSSLResponse;

    DoRequestAsync<Req, Resp>(
        "InstanceEnableSSL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::InstanceEnableSSLOutcomeCallable MongodbClient::InstanceEnableSSLCallable(const InstanceEnableSSLRequest &request)
{
    const auto prom = std::make_shared<std::promise<InstanceEnableSSLOutcome>>();
    InstanceEnableSSLAsync(
    request,
    [prom](
        const MongodbClient*,
        const InstanceEnableSSLRequest&,
        InstanceEnableSSLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::IsolateDBInstanceOutcome MongodbClient::IsolateDBInstance(const IsolateDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDBInstanceResponse rsp = IsolateDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDBInstanceOutcome(rsp);
        else
            return IsolateDBInstanceOutcome(o.GetError());
    }
    else
    {
        return IsolateDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::IsolateDBInstanceAsync(const IsolateDBInstanceRequest& request, const IsolateDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDBInstanceRequest&;
    using Resp = IsolateDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::IsolateDBInstanceOutcomeCallable MongodbClient::IsolateDBInstanceCallable(const IsolateDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDBInstanceOutcome>>();
    IsolateDBInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const IsolateDBInstanceRequest&,
        IsolateDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::ModifyDBInstanceNetworkAddressOutcome MongodbClient::ModifyDBInstanceNetworkAddress(const ModifyDBInstanceNetworkAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceNetworkAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceNetworkAddressResponse rsp = ModifyDBInstanceNetworkAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceNetworkAddressOutcome(rsp);
        else
            return ModifyDBInstanceNetworkAddressOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceNetworkAddressOutcome(outcome.GetError());
    }
}

void MongodbClient::ModifyDBInstanceNetworkAddressAsync(const ModifyDBInstanceNetworkAddressRequest& request, const ModifyDBInstanceNetworkAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceNetworkAddressRequest&;
    using Resp = ModifyDBInstanceNetworkAddressResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceNetworkAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::ModifyDBInstanceNetworkAddressOutcomeCallable MongodbClient::ModifyDBInstanceNetworkAddressCallable(const ModifyDBInstanceNetworkAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceNetworkAddressOutcome>>();
    ModifyDBInstanceNetworkAddressAsync(
    request,
    [prom](
        const MongodbClient*,
        const ModifyDBInstanceNetworkAddressRequest&,
        ModifyDBInstanceNetworkAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::ModifyDBInstanceSecurityGroupOutcome MongodbClient::ModifyDBInstanceSecurityGroup(const ModifyDBInstanceSecurityGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSecurityGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSecurityGroupResponse rsp = ModifyDBInstanceSecurityGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSecurityGroupOutcome(rsp);
        else
            return ModifyDBInstanceSecurityGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSecurityGroupOutcome(outcome.GetError());
    }
}

void MongodbClient::ModifyDBInstanceSecurityGroupAsync(const ModifyDBInstanceSecurityGroupRequest& request, const ModifyDBInstanceSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceSecurityGroupRequest&;
    using Resp = ModifyDBInstanceSecurityGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceSecurityGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::ModifyDBInstanceSecurityGroupOutcomeCallable MongodbClient::ModifyDBInstanceSecurityGroupCallable(const ModifyDBInstanceSecurityGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSecurityGroupOutcome>>();
    ModifyDBInstanceSecurityGroupAsync(
    request,
    [prom](
        const MongodbClient*,
        const ModifyDBInstanceSecurityGroupRequest&,
        ModifyDBInstanceSecurityGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::ModifyDBInstanceSpecOutcome MongodbClient::ModifyDBInstanceSpec(const ModifyDBInstanceSpecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBInstanceSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBInstanceSpecResponse rsp = ModifyDBInstanceSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBInstanceSpecOutcome(rsp);
        else
            return ModifyDBInstanceSpecOutcome(o.GetError());
    }
    else
    {
        return ModifyDBInstanceSpecOutcome(outcome.GetError());
    }
}

void MongodbClient::ModifyDBInstanceSpecAsync(const ModifyDBInstanceSpecRequest& request, const ModifyDBInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBInstanceSpecRequest&;
    using Resp = ModifyDBInstanceSpecResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBInstanceSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::ModifyDBInstanceSpecOutcomeCallable MongodbClient::ModifyDBInstanceSpecCallable(const ModifyDBInstanceSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBInstanceSpecOutcome>>();
    ModifyDBInstanceSpecAsync(
    request,
    [prom](
        const MongodbClient*,
        const ModifyDBInstanceSpecRequest&,
        ModifyDBInstanceSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::OfflineIsolatedDBInstanceOutcome MongodbClient::OfflineIsolatedDBInstance(const OfflineIsolatedDBInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineIsolatedDBInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineIsolatedDBInstanceResponse rsp = OfflineIsolatedDBInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineIsolatedDBInstanceOutcome(rsp);
        else
            return OfflineIsolatedDBInstanceOutcome(o.GetError());
    }
    else
    {
        return OfflineIsolatedDBInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::OfflineIsolatedDBInstanceAsync(const OfflineIsolatedDBInstanceRequest& request, const OfflineIsolatedDBInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OfflineIsolatedDBInstanceRequest&;
    using Resp = OfflineIsolatedDBInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "OfflineIsolatedDBInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::OfflineIsolatedDBInstanceOutcomeCallable MongodbClient::OfflineIsolatedDBInstanceCallable(const OfflineIsolatedDBInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<OfflineIsolatedDBInstanceOutcome>>();
    OfflineIsolatedDBInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const OfflineIsolatedDBInstanceRequest&,
        OfflineIsolatedDBInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::RenameInstanceOutcome MongodbClient::RenameInstance(const RenameInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenameInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenameInstanceResponse rsp = RenameInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenameInstanceOutcome(rsp);
        else
            return RenameInstanceOutcome(o.GetError());
    }
    else
    {
        return RenameInstanceOutcome(outcome.GetError());
    }
}

void MongodbClient::RenameInstanceAsync(const RenameInstanceRequest& request, const RenameInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenameInstanceRequest&;
    using Resp = RenameInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "RenameInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::RenameInstanceOutcomeCallable MongodbClient::RenameInstanceCallable(const RenameInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenameInstanceOutcome>>();
    RenameInstanceAsync(
    request,
    [prom](
        const MongodbClient*,
        const RenameInstanceRequest&,
        RenameInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::RenewDBInstancesOutcome MongodbClient::RenewDBInstances(const RenewDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDBInstancesResponse rsp = RenewDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDBInstancesOutcome(rsp);
        else
            return RenewDBInstancesOutcome(o.GetError());
    }
    else
    {
        return RenewDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::RenewDBInstancesAsync(const RenewDBInstancesRequest& request, const RenewDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDBInstancesRequest&;
    using Resp = RenewDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::RenewDBInstancesOutcomeCallable MongodbClient::RenewDBInstancesCallable(const RenewDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDBInstancesOutcome>>();
    RenewDBInstancesAsync(
    request,
    [prom](
        const MongodbClient*,
        const RenewDBInstancesRequest&,
        RenewDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::ResetDBInstancePasswordOutcome MongodbClient::ResetDBInstancePassword(const ResetDBInstancePasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDBInstancePassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDBInstancePasswordResponse rsp = ResetDBInstancePasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDBInstancePasswordOutcome(rsp);
        else
            return ResetDBInstancePasswordOutcome(o.GetError());
    }
    else
    {
        return ResetDBInstancePasswordOutcome(outcome.GetError());
    }
}

void MongodbClient::ResetDBInstancePasswordAsync(const ResetDBInstancePasswordRequest& request, const ResetDBInstancePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetDBInstancePasswordRequest&;
    using Resp = ResetDBInstancePasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetDBInstancePassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::ResetDBInstancePasswordOutcomeCallable MongodbClient::ResetDBInstancePasswordCallable(const ResetDBInstancePasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDBInstancePasswordOutcome>>();
    ResetDBInstancePasswordAsync(
    request,
    [prom](
        const MongodbClient*,
        const ResetDBInstancePasswordRequest&,
        ResetDBInstancePasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::SetDBInstanceDeletionProtectionOutcome MongodbClient::SetDBInstanceDeletionProtection(const SetDBInstanceDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "SetDBInstanceDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetDBInstanceDeletionProtectionResponse rsp = SetDBInstanceDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetDBInstanceDeletionProtectionOutcome(rsp);
        else
            return SetDBInstanceDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return SetDBInstanceDeletionProtectionOutcome(outcome.GetError());
    }
}

void MongodbClient::SetDBInstanceDeletionProtectionAsync(const SetDBInstanceDeletionProtectionRequest& request, const SetDBInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetDBInstanceDeletionProtectionRequest&;
    using Resp = SetDBInstanceDeletionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "SetDBInstanceDeletionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::SetDBInstanceDeletionProtectionOutcomeCallable MongodbClient::SetDBInstanceDeletionProtectionCallable(const SetDBInstanceDeletionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetDBInstanceDeletionProtectionOutcome>>();
    SetDBInstanceDeletionProtectionAsync(
    request,
    [prom](
        const MongodbClient*,
        const SetDBInstanceDeletionProtectionRequest&,
        SetDBInstanceDeletionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::TerminateDBInstancesOutcome MongodbClient::TerminateDBInstances(const TerminateDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateDBInstancesResponse rsp = TerminateDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateDBInstancesOutcome(rsp);
        else
            return TerminateDBInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateDBInstancesOutcome(outcome.GetError());
    }
}

void MongodbClient::TerminateDBInstancesAsync(const TerminateDBInstancesRequest& request, const TerminateDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateDBInstancesRequest&;
    using Resp = TerminateDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::TerminateDBInstancesOutcomeCallable MongodbClient::TerminateDBInstancesCallable(const TerminateDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateDBInstancesOutcome>>();
    TerminateDBInstancesAsync(
    request,
    [prom](
        const MongodbClient*,
        const TerminateDBInstancesRequest&,
        TerminateDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::UpgradeDBInstanceKernelVersionOutcome MongodbClient::UpgradeDBInstanceKernelVersion(const UpgradeDBInstanceKernelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDBInstanceKernelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDBInstanceKernelVersionResponse rsp = UpgradeDBInstanceKernelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDBInstanceKernelVersionOutcome(rsp);
        else
            return UpgradeDBInstanceKernelVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeDBInstanceKernelVersionOutcome(outcome.GetError());
    }
}

void MongodbClient::UpgradeDBInstanceKernelVersionAsync(const UpgradeDBInstanceKernelVersionRequest& request, const UpgradeDBInstanceKernelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDBInstanceKernelVersionRequest&;
    using Resp = UpgradeDBInstanceKernelVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDBInstanceKernelVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::UpgradeDBInstanceKernelVersionOutcomeCallable MongodbClient::UpgradeDBInstanceKernelVersionCallable(const UpgradeDBInstanceKernelVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDBInstanceKernelVersionOutcome>>();
    UpgradeDBInstanceKernelVersionAsync(
    request,
    [prom](
        const MongodbClient*,
        const UpgradeDBInstanceKernelVersionRequest&,
        UpgradeDBInstanceKernelVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MongodbClient::UpgradeDbInstanceVersionOutcome MongodbClient::UpgradeDbInstanceVersion(const UpgradeDbInstanceVersionRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeDbInstanceVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeDbInstanceVersionResponse rsp = UpgradeDbInstanceVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeDbInstanceVersionOutcome(rsp);
        else
            return UpgradeDbInstanceVersionOutcome(o.GetError());
    }
    else
    {
        return UpgradeDbInstanceVersionOutcome(outcome.GetError());
    }
}

void MongodbClient::UpgradeDbInstanceVersionAsync(const UpgradeDbInstanceVersionRequest& request, const UpgradeDbInstanceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeDbInstanceVersionRequest&;
    using Resp = UpgradeDbInstanceVersionResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeDbInstanceVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MongodbClient::UpgradeDbInstanceVersionOutcomeCallable MongodbClient::UpgradeDbInstanceVersionCallable(const UpgradeDbInstanceVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeDbInstanceVersionOutcome>>();
    UpgradeDbInstanceVersionAsync(
    request,
    [prom](
        const MongodbClient*,
        const UpgradeDbInstanceVersionRequest&,
        UpgradeDbInstanceVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}


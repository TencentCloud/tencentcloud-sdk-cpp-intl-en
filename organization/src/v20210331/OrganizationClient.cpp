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

#include <tencentcloud/organization/v20210331/OrganizationClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Organization::V20210331;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-31";
    const string ENDPOINT = "organization.tencentcloudapi.com";
}

OrganizationClient::OrganizationClient(const Credential &credential, const string &region) :
    OrganizationClient(credential, region, ClientProfile())
{
}

OrganizationClient::OrganizationClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OrganizationClient::AddExternalSAMLIdPCertificateOutcome OrganizationClient::AddExternalSAMLIdPCertificate(const AddExternalSAMLIdPCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "AddExternalSAMLIdPCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddExternalSAMLIdPCertificateResponse rsp = AddExternalSAMLIdPCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddExternalSAMLIdPCertificateOutcome(rsp);
        else
            return AddExternalSAMLIdPCertificateOutcome(o.GetError());
    }
    else
    {
        return AddExternalSAMLIdPCertificateOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddExternalSAMLIdPCertificateAsync(const AddExternalSAMLIdPCertificateRequest& request, const AddExternalSAMLIdPCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddExternalSAMLIdPCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddExternalSAMLIdPCertificateOutcomeCallable OrganizationClient::AddExternalSAMLIdPCertificateCallable(const AddExternalSAMLIdPCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddExternalSAMLIdPCertificateOutcome()>>(
        [this, request]()
        {
            return this->AddExternalSAMLIdPCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AddOrganizationNodeOutcome OrganizationClient::AddOrganizationNode(const AddOrganizationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "AddOrganizationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddOrganizationNodeResponse rsp = AddOrganizationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddOrganizationNodeOutcome(rsp);
        else
            return AddOrganizationNodeOutcome(o.GetError());
    }
    else
    {
        return AddOrganizationNodeOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddOrganizationNodeAsync(const AddOrganizationNodeRequest& request, const AddOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddOrganizationNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddOrganizationNodeOutcomeCallable OrganizationClient::AddOrganizationNodeCallable(const AddOrganizationNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddOrganizationNodeOutcome()>>(
        [this, request]()
        {
            return this->AddOrganizationNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AddPermissionPolicyToRoleConfigurationOutcome OrganizationClient::AddPermissionPolicyToRoleConfiguration(const AddPermissionPolicyToRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "AddPermissionPolicyToRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddPermissionPolicyToRoleConfigurationResponse rsp = AddPermissionPolicyToRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddPermissionPolicyToRoleConfigurationOutcome(rsp);
        else
            return AddPermissionPolicyToRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return AddPermissionPolicyToRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddPermissionPolicyToRoleConfigurationAsync(const AddPermissionPolicyToRoleConfigurationRequest& request, const AddPermissionPolicyToRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddPermissionPolicyToRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddPermissionPolicyToRoleConfigurationOutcomeCallable OrganizationClient::AddPermissionPolicyToRoleConfigurationCallable(const AddPermissionPolicyToRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddPermissionPolicyToRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->AddPermissionPolicyToRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::AddUserToGroupOutcome OrganizationClient::AddUserToGroup(const AddUserToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserToGroupResponse rsp = AddUserToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserToGroupOutcome(rsp);
        else
            return AddUserToGroupOutcome(o.GetError());
    }
    else
    {
        return AddUserToGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::AddUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUserToGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::AddUserToGroupOutcomeCallable OrganizationClient::AddUserToGroupCallable(const AddUserToGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUserToGroupOutcome()>>(
        [this, request]()
        {
            return this->AddUserToGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::BindOrganizationMemberAuthAccountOutcome OrganizationClient::BindOrganizationMemberAuthAccount(const BindOrganizationMemberAuthAccountRequest &request)
{
    auto outcome = MakeRequest(request, "BindOrganizationMemberAuthAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindOrganizationMemberAuthAccountResponse rsp = BindOrganizationMemberAuthAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindOrganizationMemberAuthAccountOutcome(rsp);
        else
            return BindOrganizationMemberAuthAccountOutcome(o.GetError());
    }
    else
    {
        return BindOrganizationMemberAuthAccountOutcome(outcome.GetError());
    }
}

void OrganizationClient::BindOrganizationMemberAuthAccountAsync(const BindOrganizationMemberAuthAccountRequest& request, const BindOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindOrganizationMemberAuthAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::BindOrganizationMemberAuthAccountOutcomeCallable OrganizationClient::BindOrganizationMemberAuthAccountCallable(const BindOrganizationMemberAuthAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindOrganizationMemberAuthAccountOutcome()>>(
        [this, request]()
        {
            return this->BindOrganizationMemberAuthAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CancelOrganizationMemberAuthAccountOutcome OrganizationClient::CancelOrganizationMemberAuthAccount(const CancelOrganizationMemberAuthAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CancelOrganizationMemberAuthAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelOrganizationMemberAuthAccountResponse rsp = CancelOrganizationMemberAuthAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelOrganizationMemberAuthAccountOutcome(rsp);
        else
            return CancelOrganizationMemberAuthAccountOutcome(o.GetError());
    }
    else
    {
        return CancelOrganizationMemberAuthAccountOutcome(outcome.GetError());
    }
}

void OrganizationClient::CancelOrganizationMemberAuthAccountAsync(const CancelOrganizationMemberAuthAccountRequest& request, const CancelOrganizationMemberAuthAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelOrganizationMemberAuthAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CancelOrganizationMemberAuthAccountOutcomeCallable OrganizationClient::CancelOrganizationMemberAuthAccountCallable(const CancelOrganizationMemberAuthAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelOrganizationMemberAuthAccountOutcome()>>(
        [this, request]()
        {
            return this->CancelOrganizationMemberAuthAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ClearExternalSAMLIdentityProviderOutcome OrganizationClient::ClearExternalSAMLIdentityProvider(const ClearExternalSAMLIdentityProviderRequest &request)
{
    auto outcome = MakeRequest(request, "ClearExternalSAMLIdentityProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearExternalSAMLIdentityProviderResponse rsp = ClearExternalSAMLIdentityProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearExternalSAMLIdentityProviderOutcome(rsp);
        else
            return ClearExternalSAMLIdentityProviderOutcome(o.GetError());
    }
    else
    {
        return ClearExternalSAMLIdentityProviderOutcome(outcome.GetError());
    }
}

void OrganizationClient::ClearExternalSAMLIdentityProviderAsync(const ClearExternalSAMLIdentityProviderRequest& request, const ClearExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ClearExternalSAMLIdentityProvider(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ClearExternalSAMLIdentityProviderOutcomeCallable OrganizationClient::ClearExternalSAMLIdentityProviderCallable(const ClearExternalSAMLIdentityProviderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ClearExternalSAMLIdentityProviderOutcome()>>(
        [this, request]()
        {
            return this->ClearExternalSAMLIdentityProvider(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateGroupOutcome OrganizationClient::CreateGroup(const CreateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupResponse rsp = CreateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupOutcome(rsp);
        else
            return CreateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateGroupOutcomeCallable OrganizationClient::CreateGroupCallable(const CreateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrgServiceAssignOutcome OrganizationClient::CreateOrgServiceAssign(const CreateOrgServiceAssignRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrgServiceAssign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrgServiceAssignResponse rsp = CreateOrgServiceAssignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrgServiceAssignOutcome(rsp);
        else
            return CreateOrgServiceAssignOutcome(o.GetError());
    }
    else
    {
        return CreateOrgServiceAssignOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrgServiceAssignAsync(const CreateOrgServiceAssignRequest& request, const CreateOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrgServiceAssign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrgServiceAssignOutcomeCallable OrganizationClient::CreateOrgServiceAssignCallable(const CreateOrgServiceAssignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrgServiceAssignOutcome()>>(
        [this, request]()
        {
            return this->CreateOrgServiceAssign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrganizationMemberOutcome OrganizationClient::CreateOrganizationMember(const CreateOrganizationMemberRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationMemberResponse rsp = CreateOrganizationMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationMemberOutcome(rsp);
        else
            return CreateOrganizationMemberOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrganizationMemberAsync(const CreateOrganizationMemberRequest& request, const CreateOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrganizationMemberOutcomeCallable OrganizationClient::CreateOrganizationMemberCallable(const CreateOrganizationMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationMemberOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateOrganizationMemberPolicyOutcome OrganizationClient::CreateOrganizationMemberPolicy(const CreateOrganizationMemberPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrganizationMemberPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrganizationMemberPolicyResponse rsp = CreateOrganizationMemberPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrganizationMemberPolicyOutcome(rsp);
        else
            return CreateOrganizationMemberPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateOrganizationMemberPolicyOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateOrganizationMemberPolicyAsync(const CreateOrganizationMemberPolicyRequest& request, const CreateOrganizationMemberPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrganizationMemberPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateOrganizationMemberPolicyOutcomeCallable OrganizationClient::CreateOrganizationMemberPolicyCallable(const CreateOrganizationMemberPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrganizationMemberPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateOrganizationMemberPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateRoleAssignmentOutcome OrganizationClient::CreateRoleAssignment(const CreateRoleAssignmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoleAssignment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleAssignmentResponse rsp = CreateRoleAssignmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleAssignmentOutcome(rsp);
        else
            return CreateRoleAssignmentOutcome(o.GetError());
    }
    else
    {
        return CreateRoleAssignmentOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateRoleAssignmentAsync(const CreateRoleAssignmentRequest& request, const CreateRoleAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoleAssignment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateRoleAssignmentOutcomeCallable OrganizationClient::CreateRoleAssignmentCallable(const CreateRoleAssignmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoleAssignmentOutcome()>>(
        [this, request]()
        {
            return this->CreateRoleAssignment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateRoleConfigurationOutcome OrganizationClient::CreateRoleConfiguration(const CreateRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleConfigurationResponse rsp = CreateRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleConfigurationOutcome(rsp);
        else
            return CreateRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return CreateRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateRoleConfigurationAsync(const CreateRoleConfigurationRequest& request, const CreateRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateRoleConfigurationOutcomeCallable OrganizationClient::CreateRoleConfigurationCallable(const CreateRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->CreateRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateUserOutcome OrganizationClient::CreateUser(const CreateUserRequest &request)
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

void OrganizationClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateUserOutcomeCallable OrganizationClient::CreateUserCallable(const CreateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
        [this, request]()
        {
            return this->CreateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::CreateUserSyncProvisioningOutcome OrganizationClient::CreateUserSyncProvisioning(const CreateUserSyncProvisioningRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserSyncProvisioning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserSyncProvisioningResponse rsp = CreateUserSyncProvisioningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserSyncProvisioningOutcome(rsp);
        else
            return CreateUserSyncProvisioningOutcome(o.GetError());
    }
    else
    {
        return CreateUserSyncProvisioningOutcome(outcome.GetError());
    }
}

void OrganizationClient::CreateUserSyncProvisioningAsync(const CreateUserSyncProvisioningRequest& request, const CreateUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserSyncProvisioning(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::CreateUserSyncProvisioningOutcomeCallable OrganizationClient::CreateUserSyncProvisioningCallable(const CreateUserSyncProvisioningRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserSyncProvisioningOutcome()>>(
        [this, request]()
        {
            return this->CreateUserSyncProvisioning(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteGroupOutcome OrganizationClient::DeleteGroup(const DeleteGroupRequest &request)
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

void OrganizationClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteGroupOutcomeCallable OrganizationClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrgServiceAssignOutcome OrganizationClient::DeleteOrgServiceAssign(const DeleteOrgServiceAssignRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrgServiceAssign");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrgServiceAssignResponse rsp = DeleteOrgServiceAssignResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrgServiceAssignOutcome(rsp);
        else
            return DeleteOrgServiceAssignOutcome(o.GetError());
    }
    else
    {
        return DeleteOrgServiceAssignOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrgServiceAssignAsync(const DeleteOrgServiceAssignRequest& request, const DeleteOrgServiceAssignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrgServiceAssign(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrgServiceAssignOutcomeCallable OrganizationClient::DeleteOrgServiceAssignCallable(const DeleteOrgServiceAssignRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrgServiceAssignOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrgServiceAssign(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrganizationMembersOutcome OrganizationClient::DeleteOrganizationMembers(const DeleteOrganizationMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationMembersResponse rsp = DeleteOrganizationMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationMembersOutcome(rsp);
        else
            return DeleteOrganizationMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationMembersAsync(const DeleteOrganizationMembersRequest& request, const DeleteOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationMembersOutcomeCallable OrganizationClient::DeleteOrganizationMembersCallable(const DeleteOrganizationMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationMembersOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteOrganizationNodesOutcome OrganizationClient::DeleteOrganizationNodes(const DeleteOrganizationNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOrganizationNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOrganizationNodesResponse rsp = DeleteOrganizationNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOrganizationNodesOutcome(rsp);
        else
            return DeleteOrganizationNodesOutcome(o.GetError());
    }
    else
    {
        return DeleteOrganizationNodesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteOrganizationNodesAsync(const DeleteOrganizationNodesRequest& request, const DeleteOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOrganizationNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteOrganizationNodesOutcomeCallable OrganizationClient::DeleteOrganizationNodesCallable(const DeleteOrganizationNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOrganizationNodesOutcome()>>(
        [this, request]()
        {
            return this->DeleteOrganizationNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteRoleAssignmentOutcome OrganizationClient::DeleteRoleAssignment(const DeleteRoleAssignmentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoleAssignment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleAssignmentResponse rsp = DeleteRoleAssignmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleAssignmentOutcome(rsp);
        else
            return DeleteRoleAssignmentOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleAssignmentOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteRoleAssignmentAsync(const DeleteRoleAssignmentRequest& request, const DeleteRoleAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoleAssignment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteRoleAssignmentOutcomeCallable OrganizationClient::DeleteRoleAssignmentCallable(const DeleteRoleAssignmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoleAssignmentOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoleAssignment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteRoleConfigurationOutcome OrganizationClient::DeleteRoleConfiguration(const DeleteRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleConfigurationResponse rsp = DeleteRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleConfigurationOutcome(rsp);
        else
            return DeleteRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteRoleConfigurationAsync(const DeleteRoleConfigurationRequest& request, const DeleteRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteRoleConfigurationOutcomeCallable OrganizationClient::DeleteRoleConfigurationCallable(const DeleteRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteUserOutcome OrganizationClient::DeleteUser(const DeleteUserRequest &request)
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

void OrganizationClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteUserOutcomeCallable OrganizationClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DeleteUserSyncProvisioningOutcome OrganizationClient::DeleteUserSyncProvisioning(const DeleteUserSyncProvisioningRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserSyncProvisioning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserSyncProvisioningResponse rsp = DeleteUserSyncProvisioningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserSyncProvisioningOutcome(rsp);
        else
            return DeleteUserSyncProvisioningOutcome(o.GetError());
    }
    else
    {
        return DeleteUserSyncProvisioningOutcome(outcome.GetError());
    }
}

void OrganizationClient::DeleteUserSyncProvisioningAsync(const DeleteUserSyncProvisioningRequest& request, const DeleteUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserSyncProvisioning(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DeleteUserSyncProvisioningOutcomeCallable OrganizationClient::DeleteUserSyncProvisioningCallable(const DeleteUserSyncProvisioningRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserSyncProvisioningOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserSyncProvisioning(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeIdentityCenterOutcome OrganizationClient::DescribeIdentityCenter(const DescribeIdentityCenterRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdentityCenter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdentityCenterResponse rsp = DescribeIdentityCenterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdentityCenterOutcome(rsp);
        else
            return DescribeIdentityCenterOutcome(o.GetError());
    }
    else
    {
        return DescribeIdentityCenterOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeIdentityCenterAsync(const DescribeIdentityCenterRequest& request, const DescribeIdentityCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdentityCenter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeIdentityCenterOutcomeCallable OrganizationClient::DescribeIdentityCenterCallable(const DescribeIdentityCenterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdentityCenterOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdentityCenter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationOutcome OrganizationClient::DescribeOrganization(const DescribeOrganizationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganization");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationResponse rsp = DescribeOrganizationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationOutcome(rsp);
        else
            return DescribeOrganizationOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationAsync(const DescribeOrganizationRequest& request, const DescribeOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganization(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationOutcomeCallable OrganizationClient::DescribeOrganizationCallable(const DescribeOrganizationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganization(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMemberAuthAccountsOutcome OrganizationClient::DescribeOrganizationMemberAuthAccounts(const DescribeOrganizationMemberAuthAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMemberAuthAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMemberAuthAccountsResponse rsp = DescribeOrganizationMemberAuthAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMemberAuthAccountsOutcome(rsp);
        else
            return DescribeOrganizationMemberAuthAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMemberAuthAccountsOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMemberAuthAccountsAsync(const DescribeOrganizationMemberAuthAccountsRequest& request, const DescribeOrganizationMemberAuthAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMemberAuthAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMemberAuthAccountsOutcomeCallable OrganizationClient::DescribeOrganizationMemberAuthAccountsCallable(const DescribeOrganizationMemberAuthAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMemberAuthAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMemberAuthAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMemberAuthIdentitiesOutcome OrganizationClient::DescribeOrganizationMemberAuthIdentities(const DescribeOrganizationMemberAuthIdentitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMemberAuthIdentities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMemberAuthIdentitiesResponse rsp = DescribeOrganizationMemberAuthIdentitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMemberAuthIdentitiesOutcome(rsp);
        else
            return DescribeOrganizationMemberAuthIdentitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMemberAuthIdentitiesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMemberAuthIdentitiesAsync(const DescribeOrganizationMemberAuthIdentitiesRequest& request, const DescribeOrganizationMemberAuthIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMemberAuthIdentities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMemberAuthIdentitiesOutcomeCallable OrganizationClient::DescribeOrganizationMemberAuthIdentitiesCallable(const DescribeOrganizationMemberAuthIdentitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMemberAuthIdentitiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMemberAuthIdentities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMemberPoliciesOutcome OrganizationClient::DescribeOrganizationMemberPolicies(const DescribeOrganizationMemberPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMemberPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMemberPoliciesResponse rsp = DescribeOrganizationMemberPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMemberPoliciesOutcome(rsp);
        else
            return DescribeOrganizationMemberPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMemberPoliciesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMemberPoliciesAsync(const DescribeOrganizationMemberPoliciesRequest& request, const DescribeOrganizationMemberPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMemberPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMemberPoliciesOutcomeCallable OrganizationClient::DescribeOrganizationMemberPoliciesCallable(const DescribeOrganizationMemberPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMemberPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMemberPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationMembersOutcome OrganizationClient::DescribeOrganizationMembers(const DescribeOrganizationMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationMembersResponse rsp = DescribeOrganizationMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationMembersOutcome(rsp);
        else
            return DescribeOrganizationMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationMembersAsync(const DescribeOrganizationMembersRequest& request, const DescribeOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationMembersOutcomeCallable OrganizationClient::DescribeOrganizationMembersCallable(const DescribeOrganizationMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationMembersOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DescribeOrganizationNodesOutcome OrganizationClient::DescribeOrganizationNodes(const DescribeOrganizationNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationNodesResponse rsp = DescribeOrganizationNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationNodesOutcome(rsp);
        else
            return DescribeOrganizationNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationNodesOutcome(outcome.GetError());
    }
}

void OrganizationClient::DescribeOrganizationNodesAsync(const DescribeOrganizationNodesRequest& request, const DescribeOrganizationNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrganizationNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DescribeOrganizationNodesOutcomeCallable OrganizationClient::DescribeOrganizationNodesCallable(const DescribeOrganizationNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrganizationNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrganizationNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::DismantleRoleConfigurationOutcome OrganizationClient::DismantleRoleConfiguration(const DismantleRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DismantleRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DismantleRoleConfigurationResponse rsp = DismantleRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DismantleRoleConfigurationOutcome(rsp);
        else
            return DismantleRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return DismantleRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::DismantleRoleConfigurationAsync(const DismantleRoleConfigurationRequest& request, const DismantleRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DismantleRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::DismantleRoleConfigurationOutcomeCallable OrganizationClient::DismantleRoleConfigurationCallable(const DismantleRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DismantleRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->DismantleRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetExternalSAMLIdentityProviderOutcome OrganizationClient::GetExternalSAMLIdentityProvider(const GetExternalSAMLIdentityProviderRequest &request)
{
    auto outcome = MakeRequest(request, "GetExternalSAMLIdentityProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetExternalSAMLIdentityProviderResponse rsp = GetExternalSAMLIdentityProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetExternalSAMLIdentityProviderOutcome(rsp);
        else
            return GetExternalSAMLIdentityProviderOutcome(o.GetError());
    }
    else
    {
        return GetExternalSAMLIdentityProviderOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetExternalSAMLIdentityProviderAsync(const GetExternalSAMLIdentityProviderRequest& request, const GetExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetExternalSAMLIdentityProvider(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetExternalSAMLIdentityProviderOutcomeCallable OrganizationClient::GetExternalSAMLIdentityProviderCallable(const GetExternalSAMLIdentityProviderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetExternalSAMLIdentityProviderOutcome()>>(
        [this, request]()
        {
            return this->GetExternalSAMLIdentityProvider(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetGroupOutcome OrganizationClient::GetGroup(const GetGroupRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupResponse rsp = GetGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupOutcome(rsp);
        else
            return GetGroupOutcome(o.GetError());
    }
    else
    {
        return GetGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetGroupOutcomeCallable OrganizationClient::GetGroupCallable(const GetGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGroupOutcome()>>(
        [this, request]()
        {
            return this->GetGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetProvisioningTaskStatusOutcome OrganizationClient::GetProvisioningTaskStatus(const GetProvisioningTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetProvisioningTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetProvisioningTaskStatusResponse rsp = GetProvisioningTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetProvisioningTaskStatusOutcome(rsp);
        else
            return GetProvisioningTaskStatusOutcome(o.GetError());
    }
    else
    {
        return GetProvisioningTaskStatusOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetProvisioningTaskStatusAsync(const GetProvisioningTaskStatusRequest& request, const GetProvisioningTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetProvisioningTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetProvisioningTaskStatusOutcomeCallable OrganizationClient::GetProvisioningTaskStatusCallable(const GetProvisioningTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetProvisioningTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->GetProvisioningTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetRoleConfigurationOutcome OrganizationClient::GetRoleConfiguration(const GetRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "GetRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoleConfigurationResponse rsp = GetRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoleConfigurationOutcome(rsp);
        else
            return GetRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return GetRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetRoleConfigurationAsync(const GetRoleConfigurationRequest& request, const GetRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetRoleConfigurationOutcomeCallable OrganizationClient::GetRoleConfigurationCallable(const GetRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->GetRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetTaskStatusOutcome OrganizationClient::GetTaskStatus(const GetTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskStatusResponse rsp = GetTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskStatusOutcome(rsp);
        else
            return GetTaskStatusOutcome(o.GetError());
    }
    else
    {
        return GetTaskStatusOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetTaskStatusAsync(const GetTaskStatusRequest& request, const GetTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetTaskStatusOutcomeCallable OrganizationClient::GetTaskStatusCallable(const GetTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->GetTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetUserOutcome OrganizationClient::GetUser(const GetUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserResponse rsp = GetUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserOutcome(rsp);
        else
            return GetUserOutcome(o.GetError());
    }
    else
    {
        return GetUserOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetUserOutcomeCallable OrganizationClient::GetUserCallable(const GetUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
        [this, request]()
        {
            return this->GetUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetUserSyncProvisioningOutcome OrganizationClient::GetUserSyncProvisioning(const GetUserSyncProvisioningRequest &request)
{
    auto outcome = MakeRequest(request, "GetUserSyncProvisioning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserSyncProvisioningResponse rsp = GetUserSyncProvisioningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserSyncProvisioningOutcome(rsp);
        else
            return GetUserSyncProvisioningOutcome(o.GetError());
    }
    else
    {
        return GetUserSyncProvisioningOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetUserSyncProvisioningAsync(const GetUserSyncProvisioningRequest& request, const GetUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUserSyncProvisioning(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetUserSyncProvisioningOutcomeCallable OrganizationClient::GetUserSyncProvisioningCallable(const GetUserSyncProvisioningRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUserSyncProvisioningOutcome()>>(
        [this, request]()
        {
            return this->GetUserSyncProvisioning(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetZoneSAMLServiceProviderInfoOutcome OrganizationClient::GetZoneSAMLServiceProviderInfo(const GetZoneSAMLServiceProviderInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetZoneSAMLServiceProviderInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetZoneSAMLServiceProviderInfoResponse rsp = GetZoneSAMLServiceProviderInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetZoneSAMLServiceProviderInfoOutcome(rsp);
        else
            return GetZoneSAMLServiceProviderInfoOutcome(o.GetError());
    }
    else
    {
        return GetZoneSAMLServiceProviderInfoOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetZoneSAMLServiceProviderInfoAsync(const GetZoneSAMLServiceProviderInfoRequest& request, const GetZoneSAMLServiceProviderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetZoneSAMLServiceProviderInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetZoneSAMLServiceProviderInfoOutcomeCallable OrganizationClient::GetZoneSAMLServiceProviderInfoCallable(const GetZoneSAMLServiceProviderInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetZoneSAMLServiceProviderInfoOutcome()>>(
        [this, request]()
        {
            return this->GetZoneSAMLServiceProviderInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::GetZoneStatisticsOutcome OrganizationClient::GetZoneStatistics(const GetZoneStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "GetZoneStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetZoneStatisticsResponse rsp = GetZoneStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetZoneStatisticsOutcome(rsp);
        else
            return GetZoneStatisticsOutcome(o.GetError());
    }
    else
    {
        return GetZoneStatisticsOutcome(outcome.GetError());
    }
}

void OrganizationClient::GetZoneStatisticsAsync(const GetZoneStatisticsRequest& request, const GetZoneStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetZoneStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::GetZoneStatisticsOutcomeCallable OrganizationClient::GetZoneStatisticsCallable(const GetZoneStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetZoneStatisticsOutcome()>>(
        [this, request]()
        {
            return this->GetZoneStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::InviteOrganizationMemberOutcome OrganizationClient::InviteOrganizationMember(const InviteOrganizationMemberRequest &request)
{
    auto outcome = MakeRequest(request, "InviteOrganizationMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InviteOrganizationMemberResponse rsp = InviteOrganizationMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InviteOrganizationMemberOutcome(rsp);
        else
            return InviteOrganizationMemberOutcome(o.GetError());
    }
    else
    {
        return InviteOrganizationMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::InviteOrganizationMemberAsync(const InviteOrganizationMemberRequest& request, const InviteOrganizationMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InviteOrganizationMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::InviteOrganizationMemberOutcomeCallable OrganizationClient::InviteOrganizationMemberCallable(const InviteOrganizationMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InviteOrganizationMemberOutcome()>>(
        [this, request]()
        {
            return this->InviteOrganizationMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListExternalSAMLIdPCertificatesOutcome OrganizationClient::ListExternalSAMLIdPCertificates(const ListExternalSAMLIdPCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "ListExternalSAMLIdPCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListExternalSAMLIdPCertificatesResponse rsp = ListExternalSAMLIdPCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListExternalSAMLIdPCertificatesOutcome(rsp);
        else
            return ListExternalSAMLIdPCertificatesOutcome(o.GetError());
    }
    else
    {
        return ListExternalSAMLIdPCertificatesOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListExternalSAMLIdPCertificatesAsync(const ListExternalSAMLIdPCertificatesRequest& request, const ListExternalSAMLIdPCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListExternalSAMLIdPCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListExternalSAMLIdPCertificatesOutcomeCallable OrganizationClient::ListExternalSAMLIdPCertificatesCallable(const ListExternalSAMLIdPCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListExternalSAMLIdPCertificatesOutcome()>>(
        [this, request]()
        {
            return this->ListExternalSAMLIdPCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListGroupMembersOutcome OrganizationClient::ListGroupMembers(const ListGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "ListGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGroupMembersResponse rsp = ListGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGroupMembersOutcome(rsp);
        else
            return ListGroupMembersOutcome(o.GetError());
    }
    else
    {
        return ListGroupMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListGroupMembersAsync(const ListGroupMembersRequest& request, const ListGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListGroupMembersOutcomeCallable OrganizationClient::ListGroupMembersCallable(const ListGroupMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListGroupMembersOutcome()>>(
        [this, request]()
        {
            return this->ListGroupMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListGroupsOutcome OrganizationClient::ListGroups(const ListGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGroupsResponse rsp = ListGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGroupsOutcome(rsp);
        else
            return ListGroupsOutcome(o.GetError());
    }
    else
    {
        return ListGroupsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListGroupsOutcomeCallable OrganizationClient::ListGroupsCallable(const ListGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
        [this, request]()
        {
            return this->ListGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListJoinedGroupsForUserOutcome OrganizationClient::ListJoinedGroupsForUser(const ListJoinedGroupsForUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListJoinedGroupsForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListJoinedGroupsForUserResponse rsp = ListJoinedGroupsForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListJoinedGroupsForUserOutcome(rsp);
        else
            return ListJoinedGroupsForUserOutcome(o.GetError());
    }
    else
    {
        return ListJoinedGroupsForUserOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListJoinedGroupsForUserAsync(const ListJoinedGroupsForUserRequest& request, const ListJoinedGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListJoinedGroupsForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListJoinedGroupsForUserOutcomeCallable OrganizationClient::ListJoinedGroupsForUserCallable(const ListJoinedGroupsForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListJoinedGroupsForUserOutcome()>>(
        [this, request]()
        {
            return this->ListJoinedGroupsForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrgServiceAssignMemberOutcome OrganizationClient::ListOrgServiceAssignMember(const ListOrgServiceAssignMemberRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrgServiceAssignMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrgServiceAssignMemberResponse rsp = ListOrgServiceAssignMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrgServiceAssignMemberOutcome(rsp);
        else
            return ListOrgServiceAssignMemberOutcome(o.GetError());
    }
    else
    {
        return ListOrgServiceAssignMemberOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrgServiceAssignMemberAsync(const ListOrgServiceAssignMemberRequest& request, const ListOrgServiceAssignMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrgServiceAssignMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrgServiceAssignMemberOutcomeCallable OrganizationClient::ListOrgServiceAssignMemberCallable(const ListOrgServiceAssignMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrgServiceAssignMemberOutcome()>>(
        [this, request]()
        {
            return this->ListOrgServiceAssignMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrganizationIdentityOutcome OrganizationClient::ListOrganizationIdentity(const ListOrganizationIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationIdentityResponse rsp = ListOrganizationIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationIdentityOutcome(rsp);
        else
            return ListOrganizationIdentityOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationIdentityOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrganizationIdentityAsync(const ListOrganizationIdentityRequest& request, const ListOrganizationIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationIdentity(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrganizationIdentityOutcomeCallable OrganizationClient::ListOrganizationIdentityCallable(const ListOrganizationIdentityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationIdentityOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationIdentity(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListOrganizationServiceOutcome OrganizationClient::ListOrganizationService(const ListOrganizationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ListOrganizationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListOrganizationServiceResponse rsp = ListOrganizationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListOrganizationServiceOutcome(rsp);
        else
            return ListOrganizationServiceOutcome(o.GetError());
    }
    else
    {
        return ListOrganizationServiceOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListOrganizationServiceAsync(const ListOrganizationServiceRequest& request, const ListOrganizationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListOrganizationService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListOrganizationServiceOutcomeCallable OrganizationClient::ListOrganizationServiceCallable(const ListOrganizationServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListOrganizationServiceOutcome()>>(
        [this, request]()
        {
            return this->ListOrganizationService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListPermissionPoliciesInRoleConfigurationOutcome OrganizationClient::ListPermissionPoliciesInRoleConfiguration(const ListPermissionPoliciesInRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "ListPermissionPoliciesInRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPermissionPoliciesInRoleConfigurationResponse rsp = ListPermissionPoliciesInRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPermissionPoliciesInRoleConfigurationOutcome(rsp);
        else
            return ListPermissionPoliciesInRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return ListPermissionPoliciesInRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListPermissionPoliciesInRoleConfigurationAsync(const ListPermissionPoliciesInRoleConfigurationRequest& request, const ListPermissionPoliciesInRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListPermissionPoliciesInRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListPermissionPoliciesInRoleConfigurationOutcomeCallable OrganizationClient::ListPermissionPoliciesInRoleConfigurationCallable(const ListPermissionPoliciesInRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListPermissionPoliciesInRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->ListPermissionPoliciesInRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListRoleAssignmentsOutcome OrganizationClient::ListRoleAssignments(const ListRoleAssignmentsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRoleAssignments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRoleAssignmentsResponse rsp = ListRoleAssignmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRoleAssignmentsOutcome(rsp);
        else
            return ListRoleAssignmentsOutcome(o.GetError());
    }
    else
    {
        return ListRoleAssignmentsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListRoleAssignmentsAsync(const ListRoleAssignmentsRequest& request, const ListRoleAssignmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRoleAssignments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListRoleAssignmentsOutcomeCallable OrganizationClient::ListRoleAssignmentsCallable(const ListRoleAssignmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRoleAssignmentsOutcome()>>(
        [this, request]()
        {
            return this->ListRoleAssignments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListRoleConfigurationProvisioningsOutcome OrganizationClient::ListRoleConfigurationProvisionings(const ListRoleConfigurationProvisioningsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRoleConfigurationProvisionings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRoleConfigurationProvisioningsResponse rsp = ListRoleConfigurationProvisioningsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRoleConfigurationProvisioningsOutcome(rsp);
        else
            return ListRoleConfigurationProvisioningsOutcome(o.GetError());
    }
    else
    {
        return ListRoleConfigurationProvisioningsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListRoleConfigurationProvisioningsAsync(const ListRoleConfigurationProvisioningsRequest& request, const ListRoleConfigurationProvisioningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRoleConfigurationProvisionings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListRoleConfigurationProvisioningsOutcomeCallable OrganizationClient::ListRoleConfigurationProvisioningsCallable(const ListRoleConfigurationProvisioningsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRoleConfigurationProvisioningsOutcome()>>(
        [this, request]()
        {
            return this->ListRoleConfigurationProvisionings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListRoleConfigurationsOutcome OrganizationClient::ListRoleConfigurations(const ListRoleConfigurationsRequest &request)
{
    auto outcome = MakeRequest(request, "ListRoleConfigurations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRoleConfigurationsResponse rsp = ListRoleConfigurationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRoleConfigurationsOutcome(rsp);
        else
            return ListRoleConfigurationsOutcome(o.GetError());
    }
    else
    {
        return ListRoleConfigurationsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListRoleConfigurationsAsync(const ListRoleConfigurationsRequest& request, const ListRoleConfigurationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRoleConfigurations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListRoleConfigurationsOutcomeCallable OrganizationClient::ListRoleConfigurationsCallable(const ListRoleConfigurationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRoleConfigurationsOutcome()>>(
        [this, request]()
        {
            return this->ListRoleConfigurations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListTasksOutcome OrganizationClient::ListTasks(const ListTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTasksResponse rsp = ListTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTasksOutcome(rsp);
        else
            return ListTasksOutcome(o.GetError());
    }
    else
    {
        return ListTasksOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListTasksAsync(const ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListTasksOutcomeCallable OrganizationClient::ListTasksCallable(const ListTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTasksOutcome()>>(
        [this, request]()
        {
            return this->ListTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListUserSyncProvisioningsOutcome OrganizationClient::ListUserSyncProvisionings(const ListUserSyncProvisioningsRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserSyncProvisionings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserSyncProvisioningsResponse rsp = ListUserSyncProvisioningsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserSyncProvisioningsOutcome(rsp);
        else
            return ListUserSyncProvisioningsOutcome(o.GetError());
    }
    else
    {
        return ListUserSyncProvisioningsOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListUserSyncProvisioningsAsync(const ListUserSyncProvisioningsRequest& request, const ListUserSyncProvisioningsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUserSyncProvisionings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListUserSyncProvisioningsOutcomeCallable OrganizationClient::ListUserSyncProvisioningsCallable(const ListUserSyncProvisioningsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUserSyncProvisioningsOutcome()>>(
        [this, request]()
        {
            return this->ListUserSyncProvisionings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ListUsersOutcome OrganizationClient::ListUsers(const ListUsersRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersResponse rsp = ListUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersOutcome(rsp);
        else
            return ListUsersOutcome(o.GetError());
    }
    else
    {
        return ListUsersOutcome(outcome.GetError());
    }
}

void OrganizationClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ListUsersOutcomeCallable OrganizationClient::ListUsersCallable(const ListUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
        [this, request]()
        {
            return this->ListUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::MoveOrganizationNodeMembersOutcome OrganizationClient::MoveOrganizationNodeMembers(const MoveOrganizationNodeMembersRequest &request)
{
    auto outcome = MakeRequest(request, "MoveOrganizationNodeMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MoveOrganizationNodeMembersResponse rsp = MoveOrganizationNodeMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MoveOrganizationNodeMembersOutcome(rsp);
        else
            return MoveOrganizationNodeMembersOutcome(o.GetError());
    }
    else
    {
        return MoveOrganizationNodeMembersOutcome(outcome.GetError());
    }
}

void OrganizationClient::MoveOrganizationNodeMembersAsync(const MoveOrganizationNodeMembersRequest& request, const MoveOrganizationNodeMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MoveOrganizationNodeMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::MoveOrganizationNodeMembersOutcomeCallable OrganizationClient::MoveOrganizationNodeMembersCallable(const MoveOrganizationNodeMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MoveOrganizationNodeMembersOutcome()>>(
        [this, request]()
        {
            return this->MoveOrganizationNodeMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::OpenIdentityCenterOutcome OrganizationClient::OpenIdentityCenter(const OpenIdentityCenterRequest &request)
{
    auto outcome = MakeRequest(request, "OpenIdentityCenter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenIdentityCenterResponse rsp = OpenIdentityCenterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenIdentityCenterOutcome(rsp);
        else
            return OpenIdentityCenterOutcome(o.GetError());
    }
    else
    {
        return OpenIdentityCenterOutcome(outcome.GetError());
    }
}

void OrganizationClient::OpenIdentityCenterAsync(const OpenIdentityCenterRequest& request, const OpenIdentityCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->OpenIdentityCenter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::OpenIdentityCenterOutcomeCallable OrganizationClient::OpenIdentityCenterCallable(const OpenIdentityCenterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<OpenIdentityCenterOutcome()>>(
        [this, request]()
        {
            return this->OpenIdentityCenter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::ProvisionRoleConfigurationOutcome OrganizationClient::ProvisionRoleConfiguration(const ProvisionRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "ProvisionRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ProvisionRoleConfigurationResponse rsp = ProvisionRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ProvisionRoleConfigurationOutcome(rsp);
        else
            return ProvisionRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return ProvisionRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::ProvisionRoleConfigurationAsync(const ProvisionRoleConfigurationRequest& request, const ProvisionRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ProvisionRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::ProvisionRoleConfigurationOutcomeCallable OrganizationClient::ProvisionRoleConfigurationCallable(const ProvisionRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ProvisionRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->ProvisionRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::RemoveExternalSAMLIdPCertificateOutcome OrganizationClient::RemoveExternalSAMLIdPCertificate(const RemoveExternalSAMLIdPCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveExternalSAMLIdPCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveExternalSAMLIdPCertificateResponse rsp = RemoveExternalSAMLIdPCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveExternalSAMLIdPCertificateOutcome(rsp);
        else
            return RemoveExternalSAMLIdPCertificateOutcome(o.GetError());
    }
    else
    {
        return RemoveExternalSAMLIdPCertificateOutcome(outcome.GetError());
    }
}

void OrganizationClient::RemoveExternalSAMLIdPCertificateAsync(const RemoveExternalSAMLIdPCertificateRequest& request, const RemoveExternalSAMLIdPCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveExternalSAMLIdPCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::RemoveExternalSAMLIdPCertificateOutcomeCallable OrganizationClient::RemoveExternalSAMLIdPCertificateCallable(const RemoveExternalSAMLIdPCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveExternalSAMLIdPCertificateOutcome()>>(
        [this, request]()
        {
            return this->RemoveExternalSAMLIdPCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::RemovePermissionPolicyFromRoleConfigurationOutcome OrganizationClient::RemovePermissionPolicyFromRoleConfiguration(const RemovePermissionPolicyFromRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "RemovePermissionPolicyFromRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemovePermissionPolicyFromRoleConfigurationResponse rsp = RemovePermissionPolicyFromRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemovePermissionPolicyFromRoleConfigurationOutcome(rsp);
        else
            return RemovePermissionPolicyFromRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return RemovePermissionPolicyFromRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::RemovePermissionPolicyFromRoleConfigurationAsync(const RemovePermissionPolicyFromRoleConfigurationRequest& request, const RemovePermissionPolicyFromRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemovePermissionPolicyFromRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::RemovePermissionPolicyFromRoleConfigurationOutcomeCallable OrganizationClient::RemovePermissionPolicyFromRoleConfigurationCallable(const RemovePermissionPolicyFromRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemovePermissionPolicyFromRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->RemovePermissionPolicyFromRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::RemoveUserFromGroupOutcome OrganizationClient::RemoveUserFromGroup(const RemoveUserFromGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserFromGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserFromGroupResponse rsp = RemoveUserFromGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserFromGroupOutcome(rsp);
        else
            return RemoveUserFromGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveUserFromGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::RemoveUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUserFromGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::RemoveUserFromGroupOutcomeCallable OrganizationClient::RemoveUserFromGroupCallable(const RemoveUserFromGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserFromGroupOutcome()>>(
        [this, request]()
        {
            return this->RemoveUserFromGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::SetExternalSAMLIdentityProviderOutcome OrganizationClient::SetExternalSAMLIdentityProvider(const SetExternalSAMLIdentityProviderRequest &request)
{
    auto outcome = MakeRequest(request, "SetExternalSAMLIdentityProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetExternalSAMLIdentityProviderResponse rsp = SetExternalSAMLIdentityProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetExternalSAMLIdentityProviderOutcome(rsp);
        else
            return SetExternalSAMLIdentityProviderOutcome(o.GetError());
    }
    else
    {
        return SetExternalSAMLIdentityProviderOutcome(outcome.GetError());
    }
}

void OrganizationClient::SetExternalSAMLIdentityProviderAsync(const SetExternalSAMLIdentityProviderRequest& request, const SetExternalSAMLIdentityProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetExternalSAMLIdentityProvider(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::SetExternalSAMLIdentityProviderOutcomeCallable OrganizationClient::SetExternalSAMLIdentityProviderCallable(const SetExternalSAMLIdentityProviderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetExternalSAMLIdentityProviderOutcome()>>(
        [this, request]()
        {
            return this->SetExternalSAMLIdentityProvider(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateGroupOutcome OrganizationClient::UpdateGroup(const UpdateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGroupResponse rsp = UpdateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGroupOutcome(rsp);
        else
            return UpdateGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateGroupOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateGroupOutcomeCallable OrganizationClient::UpdateGroupCallable(const UpdateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateOrganizationNodeOutcome OrganizationClient::UpdateOrganizationNode(const UpdateOrganizationNodeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateOrganizationNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateOrganizationNodeResponse rsp = UpdateOrganizationNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateOrganizationNodeOutcome(rsp);
        else
            return UpdateOrganizationNodeOutcome(o.GetError());
    }
    else
    {
        return UpdateOrganizationNodeOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateOrganizationNodeAsync(const UpdateOrganizationNodeRequest& request, const UpdateOrganizationNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateOrganizationNode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateOrganizationNodeOutcomeCallable OrganizationClient::UpdateOrganizationNodeCallable(const UpdateOrganizationNodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateOrganizationNodeOutcome()>>(
        [this, request]()
        {
            return this->UpdateOrganizationNode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateRoleConfigurationOutcome OrganizationClient::UpdateRoleConfiguration(const UpdateRoleConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRoleConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRoleConfigurationResponse rsp = UpdateRoleConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRoleConfigurationOutcome(rsp);
        else
            return UpdateRoleConfigurationOutcome(o.GetError());
    }
    else
    {
        return UpdateRoleConfigurationOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateRoleConfigurationAsync(const UpdateRoleConfigurationRequest& request, const UpdateRoleConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRoleConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateRoleConfigurationOutcomeCallable OrganizationClient::UpdateRoleConfigurationCallable(const UpdateRoleConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRoleConfigurationOutcome()>>(
        [this, request]()
        {
            return this->UpdateRoleConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateUserOutcome OrganizationClient::UpdateUser(const UpdateUserRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserResponse rsp = UpdateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserOutcome(rsp);
        else
            return UpdateUserOutcome(o.GetError());
    }
    else
    {
        return UpdateUserOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateUserOutcomeCallable OrganizationClient::UpdateUserCallable(const UpdateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
        [this, request]()
        {
            return this->UpdateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateUserStatusOutcome OrganizationClient::UpdateUserStatus(const UpdateUserStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserStatusResponse rsp = UpdateUserStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserStatusOutcome(rsp);
        else
            return UpdateUserStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateUserStatusOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateUserStatusAsync(const UpdateUserStatusRequest& request, const UpdateUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUserStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateUserStatusOutcomeCallable OrganizationClient::UpdateUserStatusCallable(const UpdateUserStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserStatusOutcome()>>(
        [this, request]()
        {
            return this->UpdateUserStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateUserSyncProvisioningOutcome OrganizationClient::UpdateUserSyncProvisioning(const UpdateUserSyncProvisioningRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserSyncProvisioning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserSyncProvisioningResponse rsp = UpdateUserSyncProvisioningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserSyncProvisioningOutcome(rsp);
        else
            return UpdateUserSyncProvisioningOutcome(o.GetError());
    }
    else
    {
        return UpdateUserSyncProvisioningOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateUserSyncProvisioningAsync(const UpdateUserSyncProvisioningRequest& request, const UpdateUserSyncProvisioningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUserSyncProvisioning(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateUserSyncProvisioningOutcomeCallable OrganizationClient::UpdateUserSyncProvisioningCallable(const UpdateUserSyncProvisioningRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserSyncProvisioningOutcome()>>(
        [this, request]()
        {
            return this->UpdateUserSyncProvisioning(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

OrganizationClient::UpdateZoneOutcome OrganizationClient::UpdateZone(const UpdateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateZoneResponse rsp = UpdateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateZoneOutcome(rsp);
        else
            return UpdateZoneOutcome(o.GetError());
    }
    else
    {
        return UpdateZoneOutcome(outcome.GetError());
    }
}

void OrganizationClient::UpdateZoneAsync(const UpdateZoneRequest& request, const UpdateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

OrganizationClient::UpdateZoneOutcomeCallable OrganizationClient::UpdateZoneCallable(const UpdateZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateZoneOutcome()>>(
        [this, request]()
        {
            return this->UpdateZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}


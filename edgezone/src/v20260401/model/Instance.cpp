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

#include <tencentcloud/edgezone/v20260401/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_machineIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_versionNumberHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_operateStatusHasBeenSet(false),
    m_privateNetworkIdHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_privateIpV6HasBeenSet(false),
    m_publicNetworkIdHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_publicIpV6HasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("MachineId") && !value["MachineId"].IsNull())
    {
        if (!value["MachineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.MachineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineId = string(value["MachineId"].GetString());
        m_machineIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("VersionNumber") && !value["VersionNumber"].IsNull())
    {
        if (!value["VersionNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.VersionNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionNumber = string(value["VersionNumber"].GetString());
        m_versionNumberHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("OperateStatus") && !value["OperateStatus"].IsNull())
    {
        if (!value["OperateStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.OperateStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateStatus = string(value["OperateStatus"].GetString());
        m_operateStatusHasBeenSet = true;
    }

    if (value.HasMember("PrivateNetworkId") && !value["PrivateNetworkId"].IsNull())
    {
        if (!value["PrivateNetworkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PrivateNetworkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateNetworkId = string(value["PrivateNetworkId"].GetString());
        m_privateNetworkIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PrivateIpV6") && !value["PrivateIpV6"].IsNull())
    {
        if (!value["PrivateIpV6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PrivateIpV6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIpV6 = string(value["PrivateIpV6"].GetString());
        m_privateIpV6HasBeenSet = true;
    }

    if (value.HasMember("PublicNetworkId") && !value["PublicNetworkId"].IsNull())
    {
        if (!value["PublicNetworkId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PublicNetworkId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetworkId = string(value["PublicNetworkId"].GetString());
        m_publicNetworkIdHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIpV6") && !value["PublicIpV6"].IsNull())
    {
        if (!value["PublicIpV6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.PublicIpV6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpV6 = string(value["PublicIpV6"].GetString());
        m_publicIpV6HasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Instance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_operateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_privateNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateNetworkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpV6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpV6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIpV6.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpV6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpV6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIpV6.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetInstanceName() const
{
    return m_instanceName;
}

void Instance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string Instance::GetMachineId() const
{
    return m_machineId;
}

void Instance::SetMachineId(const string& _machineId)
{
    m_machineId = _machineId;
    m_machineIdHasBeenSet = true;
}

bool Instance::MachineIdHasBeenSet() const
{
    return m_machineIdHasBeenSet;
}

string Instance::GetInstanceType() const
{
    return m_instanceType;
}

void Instance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool Instance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string Instance::GetZone() const
{
    return m_zone;
}

void Instance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Instance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Instance::GetImageId() const
{
    return m_imageId;
}

void Instance::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool Instance::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string Instance::GetVersionNumber() const
{
    return m_versionNumber;
}

void Instance::SetVersionNumber(const string& _versionNumber)
{
    m_versionNumber = _versionNumber;
    m_versionNumberHasBeenSet = true;
}

bool Instance::VersionNumberHasBeenSet() const
{
    return m_versionNumberHasBeenSet;
}

string Instance::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void Instance::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool Instance::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string Instance::GetOperateStatus() const
{
    return m_operateStatus;
}

void Instance::SetOperateStatus(const string& _operateStatus)
{
    m_operateStatus = _operateStatus;
    m_operateStatusHasBeenSet = true;
}

bool Instance::OperateStatusHasBeenSet() const
{
    return m_operateStatusHasBeenSet;
}

string Instance::GetPrivateNetworkId() const
{
    return m_privateNetworkId;
}

void Instance::SetPrivateNetworkId(const string& _privateNetworkId)
{
    m_privateNetworkId = _privateNetworkId;
    m_privateNetworkIdHasBeenSet = true;
}

bool Instance::PrivateNetworkIdHasBeenSet() const
{
    return m_privateNetworkIdHasBeenSet;
}

string Instance::GetPrivateIp() const
{
    return m_privateIp;
}

void Instance::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool Instance::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string Instance::GetPrivateIpV6() const
{
    return m_privateIpV6;
}

void Instance::SetPrivateIpV6(const string& _privateIpV6)
{
    m_privateIpV6 = _privateIpV6;
    m_privateIpV6HasBeenSet = true;
}

bool Instance::PrivateIpV6HasBeenSet() const
{
    return m_privateIpV6HasBeenSet;
}

string Instance::GetPublicNetworkId() const
{
    return m_publicNetworkId;
}

void Instance::SetPublicNetworkId(const string& _publicNetworkId)
{
    m_publicNetworkId = _publicNetworkId;
    m_publicNetworkIdHasBeenSet = true;
}

bool Instance::PublicNetworkIdHasBeenSet() const
{
    return m_publicNetworkIdHasBeenSet;
}

string Instance::GetPublicIp() const
{
    return m_publicIp;
}

void Instance::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool Instance::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string Instance::GetPublicIpV6() const
{
    return m_publicIpV6;
}

void Instance::SetPublicIpV6(const string& _publicIpV6)
{
    m_publicIpV6 = _publicIpV6;
    m_publicIpV6HasBeenSet = true;
}

bool Instance::PublicIpV6HasBeenSet() const
{
    return m_publicIpV6HasBeenSet;
}

string Instance::GetCreatedTime() const
{
    return m_createdTime;
}

void Instance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Instance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}


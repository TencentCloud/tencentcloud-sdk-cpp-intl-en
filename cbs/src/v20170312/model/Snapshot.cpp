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

#include <tencentcloud/cbs/v20170312/model/Snapshot.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cbs::V20170312::Model;
using namespace rapidjson;
using namespace std;

Snapshot::Snapshot() :
    m_snapshotIdHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_diskUsageHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_snapshotStateHasBeenSet(false),
    m_snapshotNameHasBeenSet(false),
    m_percentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deadlineTimeHasBeenSet(false),
    m_encryptHasBeenSet(false),
    m_isPermanentHasBeenSet(false),
    m_copyingToRegionsHasBeenSet(false),
    m_copyFromRemoteHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_imageCountHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_shareReferenceHasBeenSet(false)
{
}

CoreInternalOutcome Snapshot::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SnapshotId") && !value["SnapshotId"].IsNull())
    {
        if (!value["SnapshotId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Snapshot.SnapshotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotId = string(value["SnapshotId"].GetString());
        m_snapshotIdHasBeenSet = true;
    }

    if (value.HasMember("Placement") && !value["Placement"].IsNull())
    {
        if (!value["Placement"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Snapshot.Placement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placement.Deserialize(value["Placement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placementHasBeenSet = true;
    }

    if (value.HasMember("DiskUsage") && !value["DiskUsage"].IsNull())
    {
        if (!value["DiskUsage"].IsString())
        {
            return CoreInternalOutcome(Error("response `Snapshot.DiskUsage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskUsage = string(value["DiskUsage"].GetString());
        m_diskUsageHasBeenSet = true;
    }

    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Snapshot.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("DiskSize") && !value["DiskSize"].IsNull())
    {
        if (!value["DiskSize"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Snapshot.DiskSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = value["DiskSize"].GetUint64();
        m_diskSizeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotState") && !value["SnapshotState"].IsNull())
    {
        if (!value["SnapshotState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Snapshot.SnapshotState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotState = string(value["SnapshotState"].GetString());
        m_snapshotStateHasBeenSet = true;
    }

    if (value.HasMember("SnapshotName") && !value["SnapshotName"].IsNull())
    {
        if (!value["SnapshotName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Snapshot.SnapshotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotName = string(value["SnapshotName"].GetString());
        m_snapshotNameHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Snapshot.Percent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetUint64();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Snapshot.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DeadlineTime") && !value["DeadlineTime"].IsNull())
    {
        if (!value["DeadlineTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Snapshot.DeadlineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadlineTime = string(value["DeadlineTime"].GetString());
        m_deadlineTimeHasBeenSet = true;
    }

    if (value.HasMember("Encrypt") && !value["Encrypt"].IsNull())
    {
        if (!value["Encrypt"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Snapshot.Encrypt` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_encrypt = value["Encrypt"].GetBool();
        m_encryptHasBeenSet = true;
    }

    if (value.HasMember("IsPermanent") && !value["IsPermanent"].IsNull())
    {
        if (!value["IsPermanent"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Snapshot.IsPermanent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPermanent = value["IsPermanent"].GetBool();
        m_isPermanentHasBeenSet = true;
    }

    if (value.HasMember("CopyingToRegions") && !value["CopyingToRegions"].IsNull())
    {
        if (!value["CopyingToRegions"].IsArray())
            return CoreInternalOutcome(Error("response `Snapshot.CopyingToRegions` is not array type"));

        const Value &tmpValue = value["CopyingToRegions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_copyingToRegions.push_back((*itr).GetString());
        }
        m_copyingToRegionsHasBeenSet = true;
    }

    if (value.HasMember("CopyFromRemote") && !value["CopyFromRemote"].IsNull())
    {
        if (!value["CopyFromRemote"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Snapshot.CopyFromRemote` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_copyFromRemote = value["CopyFromRemote"].GetBool();
        m_copyFromRemoteHasBeenSet = true;
    }

    if (value.HasMember("Images") && !value["Images"].IsNull())
    {
        if (!value["Images"].IsArray())
            return CoreInternalOutcome(Error("response `Snapshot.Images` is not array type"));

        const Value &tmpValue = value["Images"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Image item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_images.push_back(item);
        }
        m_imagesHasBeenSet = true;
    }

    if (value.HasMember("ImageCount") && !value["ImageCount"].IsNull())
    {
        if (!value["ImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Snapshot.ImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCount = value["ImageCount"].GetUint64();
        m_imageCountHasBeenSet = true;
    }

    if (value.HasMember("SnapshotType") && !value["SnapshotType"].IsNull())
    {
        if (!value["SnapshotType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Snapshot.SnapshotType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotType = string(value["SnapshotType"].GetString());
        m_snapshotTypeHasBeenSet = true;
    }

    if (value.HasMember("ShareReference") && !value["ShareReference"].IsNull())
    {
        if (!value["ShareReference"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Snapshot.ShareReference` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shareReference = value["ShareReference"].GetUint64();
        m_shareReferenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Snapshot::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_snapshotIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diskUsageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskUsage.c_str(), allocator).Move(), allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_snapshotStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_snapshotState.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }

    if (m_percentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deadlineTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeadlineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_deadlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Encrypt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encrypt, allocator);
    }

    if (m_isPermanentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsPermanent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPermanent, allocator);
    }

    if (m_copyingToRegionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CopyingToRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_copyingToRegions.begin(); itr != m_copyingToRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_copyFromRemoteHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CopyFromRemote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_copyFromRemote, allocator);
    }

    if (m_imagesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCount, allocator);
    }

    if (m_snapshotTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_snapshotType.c_str(), allocator).Move(), allocator);
    }

    if (m_shareReferenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShareReference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shareReference, allocator);
    }

}


string Snapshot::GetSnapshotId() const
{
    return m_snapshotId;
}

void Snapshot::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool Snapshot::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

Placement Snapshot::GetPlacement() const
{
    return m_placement;
}

void Snapshot::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool Snapshot::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string Snapshot::GetDiskUsage() const
{
    return m_diskUsage;
}

void Snapshot::SetDiskUsage(const string& _diskUsage)
{
    m_diskUsage = _diskUsage;
    m_diskUsageHasBeenSet = true;
}

bool Snapshot::DiskUsageHasBeenSet() const
{
    return m_diskUsageHasBeenSet;
}

string Snapshot::GetDiskId() const
{
    return m_diskId;
}

void Snapshot::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool Snapshot::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

uint64_t Snapshot::GetDiskSize() const
{
    return m_diskSize;
}

void Snapshot::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool Snapshot::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string Snapshot::GetSnapshotState() const
{
    return m_snapshotState;
}

void Snapshot::SetSnapshotState(const string& _snapshotState)
{
    m_snapshotState = _snapshotState;
    m_snapshotStateHasBeenSet = true;
}

bool Snapshot::SnapshotStateHasBeenSet() const
{
    return m_snapshotStateHasBeenSet;
}

string Snapshot::GetSnapshotName() const
{
    return m_snapshotName;
}

void Snapshot::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool Snapshot::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}

uint64_t Snapshot::GetPercent() const
{
    return m_percent;
}

void Snapshot::SetPercent(const uint64_t& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool Snapshot::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string Snapshot::GetCreateTime() const
{
    return m_createTime;
}

void Snapshot::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Snapshot::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Snapshot::GetDeadlineTime() const
{
    return m_deadlineTime;
}

void Snapshot::SetDeadlineTime(const string& _deadlineTime)
{
    m_deadlineTime = _deadlineTime;
    m_deadlineTimeHasBeenSet = true;
}

bool Snapshot::DeadlineTimeHasBeenSet() const
{
    return m_deadlineTimeHasBeenSet;
}

bool Snapshot::GetEncrypt() const
{
    return m_encrypt;
}

void Snapshot::SetEncrypt(const bool& _encrypt)
{
    m_encrypt = _encrypt;
    m_encryptHasBeenSet = true;
}

bool Snapshot::EncryptHasBeenSet() const
{
    return m_encryptHasBeenSet;
}

bool Snapshot::GetIsPermanent() const
{
    return m_isPermanent;
}

void Snapshot::SetIsPermanent(const bool& _isPermanent)
{
    m_isPermanent = _isPermanent;
    m_isPermanentHasBeenSet = true;
}

bool Snapshot::IsPermanentHasBeenSet() const
{
    return m_isPermanentHasBeenSet;
}

vector<string> Snapshot::GetCopyingToRegions() const
{
    return m_copyingToRegions;
}

void Snapshot::SetCopyingToRegions(const vector<string>& _copyingToRegions)
{
    m_copyingToRegions = _copyingToRegions;
    m_copyingToRegionsHasBeenSet = true;
}

bool Snapshot::CopyingToRegionsHasBeenSet() const
{
    return m_copyingToRegionsHasBeenSet;
}

bool Snapshot::GetCopyFromRemote() const
{
    return m_copyFromRemote;
}

void Snapshot::SetCopyFromRemote(const bool& _copyFromRemote)
{
    m_copyFromRemote = _copyFromRemote;
    m_copyFromRemoteHasBeenSet = true;
}

bool Snapshot::CopyFromRemoteHasBeenSet() const
{
    return m_copyFromRemoteHasBeenSet;
}

vector<Image> Snapshot::GetImages() const
{
    return m_images;
}

void Snapshot::SetImages(const vector<Image>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool Snapshot::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

uint64_t Snapshot::GetImageCount() const
{
    return m_imageCount;
}

void Snapshot::SetImageCount(const uint64_t& _imageCount)
{
    m_imageCount = _imageCount;
    m_imageCountHasBeenSet = true;
}

bool Snapshot::ImageCountHasBeenSet() const
{
    return m_imageCountHasBeenSet;
}

string Snapshot::GetSnapshotType() const
{
    return m_snapshotType;
}

void Snapshot::SetSnapshotType(const string& _snapshotType)
{
    m_snapshotType = _snapshotType;
    m_snapshotTypeHasBeenSet = true;
}

bool Snapshot::SnapshotTypeHasBeenSet() const
{
    return m_snapshotTypeHasBeenSet;
}

uint64_t Snapshot::GetShareReference() const
{
    return m_shareReference;
}

void Snapshot::SetShareReference(const uint64_t& _shareReference)
{
    m_shareReference = _shareReference;
    m_shareReferenceHasBeenSet = true;
}

bool Snapshot::ShareReferenceHasBeenSet() const
{
    return m_shareReferenceHasBeenSet;
}


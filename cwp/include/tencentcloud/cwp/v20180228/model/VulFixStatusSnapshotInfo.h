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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSSNAPSHOTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSSNAPSHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Machine snapshot information
                */
                class VulFixStatusSnapshotInfo : public AbstractModel
                {
                public:
                    VulFixStatusSnapshotInfo();
                    ~VulFixStatusSnapshotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cvm id
                     * @return Quuid cvm id
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm id
                     * @param _quuid cvm id
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIp Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostIp Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Snapshot name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotName Snapshot name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotName Snapshot name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取Snapshot creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Snapshot creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Snapshot creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Snapshot creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Snapshot ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotId Snapshot ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotId Snapshot ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Unique record ID
                     * @return Id Unique record ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique record ID
                     * @param _id Unique record ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Snapshot status. 0: initial; 1: created successfully; 2: creation failed.
                     * @return Status Snapshot status. 0: initial; 1: created successfully; 2: creation failed.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Snapshot status. 0: initial; 1: created successfully; 2: creation failed.
                     * @param _status Snapshot status. 0: initial; 1: created successfully; 2: creation failed.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Snapshot creation failure reason
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailReason Snapshot creation failure reason
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置Snapshot creation failure reason
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failReason Snapshot creation failure reason
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                private:

                    /**
                     * cvm id
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Host IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Snapshot name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * Snapshot creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Snapshot ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Unique record ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Snapshot status. 0: initial; 1: created successfully; 2: creation failed.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Snapshot creation failure reason
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULFIXSTATUSSNAPSHOTINFO_H_

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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERNODE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Instance node type
                */
                class InstanceClusterNode : public AbstractModel
                {
                public:
                    InstanceClusterNode();
                    ~InstanceClusterNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node name
                     * @return Name Node name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Node name
                     * @param Name Node name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取ID of the runtime node of an instance
                     * @return RunId ID of the runtime node of an instance
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置ID of the runtime node of an instance
                     * @param RunId ID of the runtime node of an instance
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     */
                    bool RunIdHasBeenSet() const;

                    /**
                     * 获取Cluster role. 0: primary; 1: secondary
                     * @return Role Cluster role. 0: primary; 1: secondary
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置Cluster role. 0: primary; 1: secondary
                     * @param Role Cluster role. 0: primary; 1: secondary
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Node status. 0: readwrite; 1: read; 2: backup
                     * @return Status Node status. 0: readwrite; 1: read; 2: backup
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Node status. 0: readwrite; 1: read; 2: backup
                     * @param Status Node status. 0: readwrite; 1: read; 2: backup
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Service status. 0: down; 1: on
                     * @return Connected Service status. 0: down; 1: on
                     */
                    int64_t GetConnected() const;

                    /**
                     * 设置Service status. 0: down; 1: on
                     * @param Connected Service status. 0: down; 1: on
                     */
                    void SetConnected(const int64_t& _connected);

                    /**
                     * 判断参数 Connected 是否已赋值
                     * @return Connected 是否已赋值
                     */
                    bool ConnectedHasBeenSet() const;

                    /**
                     * 获取Node creation time
                     * @return CreateTime Node creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Node creation time
                     * @param CreateTime Node creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Node deactivation time
                     * @return DownTime Node deactivation time
                     */
                    std::string GetDownTime() const;

                    /**
                     * 设置Node deactivation time
                     * @param DownTime Node deactivation time
                     */
                    void SetDownTime(const std::string& _downTime);

                    /**
                     * 判断参数 DownTime 是否已赋值
                     * @return DownTime 是否已赋值
                     */
                    bool DownTimeHasBeenSet() const;

                    /**
                     * 获取Distribution of node slots
                     * @return Slots Distribution of node slots
                     */
                    std::string GetSlots() const;

                    /**
                     * 设置Distribution of node slots
                     * @param Slots Distribution of node slots
                     */
                    void SetSlots(const std::string& _slots);

                    /**
                     * 判断参数 Slots 是否已赋值
                     * @return Slots 是否已赋值
                     */
                    bool SlotsHasBeenSet() const;

                    /**
                     * 获取Distribution of node keys
                     * @return Keys Distribution of node keys
                     */
                    int64_t GetKeys() const;

                    /**
                     * 设置Distribution of node keys
                     * @param Keys Distribution of node keys
                     */
                    void SetKeys(const int64_t& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Node QPS
                     * @return Qps Node QPS
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置Node QPS
                     * @param Qps Node QPS
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取QPS slope of a node
                     * @return QpsSlope QPS slope of a node
                     */
                    double GetQpsSlope() const;

                    /**
                     * 设置QPS slope of a node
                     * @param QpsSlope QPS slope of a node
                     */
                    void SetQpsSlope(const double& _qpsSlope);

                    /**
                     * 判断参数 QpsSlope 是否已赋值
                     * @return QpsSlope 是否已赋值
                     */
                    bool QpsSlopeHasBeenSet() const;

                    /**
                     * 获取Node storage
                     * @return Storage Node storage
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置Node storage
                     * @param Storage Node storage
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Storage slope of a node
                     * @return StorageSlope Storage slope of a node
                     */
                    double GetStorageSlope() const;

                    /**
                     * 设置Storage slope of a node
                     * @param StorageSlope Storage slope of a node
                     */
                    void SetStorageSlope(const double& _storageSlope);

                    /**
                     * 判断参数 StorageSlope 是否已赋值
                     * @return StorageSlope 是否已赋值
                     */
                    bool StorageSlopeHasBeenSet() const;

                private:

                    /**
                     * Node name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ID of the runtime node of an instance
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * Cluster role. 0: primary; 1: secondary
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Node status. 0: readwrite; 1: read; 2: backup
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Service status. 0: down; 1: on
                     */
                    int64_t m_connected;
                    bool m_connectedHasBeenSet;

                    /**
                     * Node creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Node deactivation time
                     */
                    std::string m_downTime;
                    bool m_downTimeHasBeenSet;

                    /**
                     * Distribution of node slots
                     */
                    std::string m_slots;
                    bool m_slotsHasBeenSet;

                    /**
                     * Distribution of node keys
                     */
                    int64_t m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Node QPS
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * QPS slope of a node
                     */
                    double m_qpsSlope;
                    bool m_qpsSlopeHasBeenSet;

                    /**
                     * Node storage
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Storage slope of a node
                     */
                    double m_storageSlope;
                    bool m_storageSlopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCECLUSTERNODE_H_

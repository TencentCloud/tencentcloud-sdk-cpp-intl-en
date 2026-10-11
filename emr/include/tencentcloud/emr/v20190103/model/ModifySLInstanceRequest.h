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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifySLInstance request structure.
                */
                class ModifySLInstanceRequest : public AbstractModel
                {
                public:
                    ModifySLInstanceRequest();
                    ~ModifySLInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance unique identifier (string).</p>
                     * @return InstanceId <p>Instance unique identifier (string).</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance unique identifier (string).</p>
                     * @param _instanceId <p>Instance unique identifier (string).</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Name of the region to be changed.</p>
                     * @return Zone <p>Name of the region to be changed.</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>Name of the region to be changed.</p>
                     * @param _zone <p>Name of the region to be changed.</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>Target number of nodes in this region after the configuration change. The total number of nodes in all regions should be greater than or equal to 3 and less than or equal to 50.</p>
                     * @return NodeNum <p>Target number of nodes in this region after the configuration change. The total number of nodes in all regions should be greater than or equal to 3 and less than or equal to 50.</p>
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置<p>Target number of nodes in this region after the configuration change. The total number of nodes in all regions should be greater than or equal to 3 and less than or equal to 50.</p>
                     * @param _nodeNum <p>Target number of nodes in this region after the configuration change. The total number of nodes in all regions should be greater than or equal to 3 and less than or equal to 50.</p>
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取<p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     * @return ClientToken <p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     * @param _clientToken <p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>Storage space size. It must be a multiple of 100 and cannot be smaller than the current storage space (only scale-out is allowed).</p><p>Unit: GB.</p>
                     * @return DiskSize <p>Storage space size. It must be a multiple of 100 and cannot be smaller than the current storage space (only scale-out is allowed).</p><p>Unit: GB.</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Storage space size. It must be a multiple of 100 and cannot be smaller than the current storage space (only scale-out is allowed).</p><p>Unit: GB.</p>
                     * @param _diskSize <p>Storage space size. It must be a multiple of 100 and cannot be smaller than the current storage space (only scale-out is allowed).</p><p>Unit: GB.</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * <p>Instance unique identifier (string).</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Name of the region to be changed.</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Target number of nodes in this region after the configuration change. The total number of nodes in all regions should be greater than or equal to 3 and less than or equal to 50.</p>
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>Unique random identifier with a time-to-live of 5 minutes, which needs to be specified by the caller to prevent the client from repeatedly creating resources, for example, a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Storage space size. It must be a multiple of 100 and cannot be smaller than the current storage space (only scale-out is allowed).</p><p>Unit: GB.</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_

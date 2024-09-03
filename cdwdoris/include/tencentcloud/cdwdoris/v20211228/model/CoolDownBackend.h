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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNBACKEND_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNBACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Information on the backend node supporting hot/cold data layering
                */
                class CoolDownBackend : public AbstractModel
                {
                public:
                    CoolDownBackend();
                    ~CoolDownBackend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Field: Host
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Host Field: Host
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Field: Host
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _host Field: Host
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Field: DataUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataUsedCapacity Field: DataUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataUsedCapacity() const;

                    /**
                     * 设置Field: DataUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dataUsedCapacity Field: DataUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataUsedCapacity(const std::string& _dataUsedCapacity);

                    /**
                     * 判断参数 DataUsedCapacity 是否已赋值
                     * @return DataUsedCapacity 是否已赋值
                     * 
                     */
                    bool DataUsedCapacityHasBeenSet() const;

                    /**
                     * 获取Field: TotalCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCapacity Field: TotalCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTotalCapacity() const;

                    /**
                     * 设置Field: TotalCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCapacity Field: TotalCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCapacity(const std::string& _totalCapacity);

                    /**
                     * 判断参数 TotalCapacity 是否已赋值
                     * @return TotalCapacity 是否已赋值
                     * 
                     */
                    bool TotalCapacityHasBeenSet() const;

                    /**
                     * 获取Field: RemoteUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RemoteUsedCapacity Field: RemoteUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemoteUsedCapacity() const;

                    /**
                     * 设置Field: RemoteUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _remoteUsedCapacity Field: RemoteUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemoteUsedCapacity(const std::string& _remoteUsedCapacity);

                    /**
                     * 判断参数 RemoteUsedCapacity 是否已赋值
                     * @return RemoteUsedCapacity 是否已赋值
                     * 
                     */
                    bool RemoteUsedCapacityHasBeenSet() const;

                private:

                    /**
                     * Field: Host
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Field: DataUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataUsedCapacity;
                    bool m_dataUsedCapacityHasBeenSet;

                    /**
                     * Field: TotalCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalCapacity;
                    bool m_totalCapacityHasBeenSet;

                    /**
                     * Field: RemoteUsedCapacity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_remoteUsedCapacity;
                    bool m_remoteUsedCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_COOLDOWNBACKEND_H_

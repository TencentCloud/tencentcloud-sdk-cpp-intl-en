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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDINSTANCEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Information of the instance bound to the resource pack
                */
                class BindInstanceInfo : public AbstractModel
                {
                public:
                    BindInstanceInfo();
                    ~BindInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the bound cluster.
                     * @return InstanceId ID of the bound cluster.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the bound cluster.
                     * @param _instanceId ID of the bound cluster.
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
                     * 获取The region where the bound instance is located.
                     * @return InstanceRegion The region where the bound instance is located.
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置The region where the bound instance is located.
                     * @param _instanceRegion The region where the bound instance is located.
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取Type of the bound instance.
                     * @return InstanceType Type of the bound instance.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Type of the bound instance.
                     * @param _instanceType Type of the bound instance.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取The instance ID under the bound cluster.
                     * @return ExtendIds The instance ID under the bound cluster.
                     * 
                     */
                    std::vector<std::string> GetExtendIds() const;

                    /**
                     * 设置The instance ID under the bound cluster.
                     * @param _extendIds The instance ID under the bound cluster.
                     * 
                     */
                    void SetExtendIds(const std::vector<std::string>& _extendIds);

                    /**
                     * 判断参数 ExtendIds 是否已赋值
                     * @return ExtendIds 是否已赋值
                     * 
                     */
                    bool ExtendIdsHasBeenSet() const;

                private:

                    /**
                     * ID of the bound cluster.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The region where the bound instance is located.
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * Type of the bound instance.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * The instance ID under the bound cluster.
                     */
                    std::vector<std::string> m_extendIds;
                    bool m_extendIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDINSTANCEINFO_H_

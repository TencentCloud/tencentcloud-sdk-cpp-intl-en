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
                * Information of the instance bound to the resource package
                */
                class BindInstanceInfo : public AbstractModel
                {
                public:
                    BindInstanceInfo();
                    ~BindInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bound cluster ID.
                     * @return InstanceId Bound cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Bound cluster ID.
                     * @param _instanceId Bound cluster ID.
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
                     * 获取Region of the bound instance
                     * @return InstanceRegion Region of the bound instance
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置Region of the bound instance
                     * @param _instanceRegion Region of the bound instance
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
                     * 获取Bound instance type
                     * @return InstanceType Bound instance type
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Bound instance type
                     * @param _instanceType Bound instance type
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
                     * 获取Instance ID under the bound cluster
                     * @return ExtendIds Instance ID under the bound cluster
                     * 
                     */
                    std::vector<std::string> GetExtendIds() const;

                    /**
                     * 设置Instance ID under the bound cluster
                     * @param _extendIds Instance ID under the bound cluster
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
                     * Bound cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Region of the bound instance
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * Bound instance type
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance ID under the bound cluster
                     */
                    std::vector<std::string> m_extendIds;
                    bool m_extendIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINDINSTANCEINFO_H_

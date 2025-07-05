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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACENEW_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DimensionNew.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Policy type information
                */
                class CommonNamespaceNew : public AbstractModel
                {
                public:
                    CommonNamespaceNew();
                    ~CommonNamespaceNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace ID
                     * @return Id Namespace ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Namespace ID
                     * @param _id Namespace ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return Name Namespace name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Namespace name
                     * @param _name Namespace name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Monitoring type
                     * @return MonitorType Monitoring type
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置Monitoring type
                     * @param _monitorType Monitoring type
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取Dimension information
                     * @return Dimensions Dimension information
                     * 
                     */
                    std::vector<DimensionNew> GetDimensions() const;

                    /**
                     * 设置Dimension information
                     * @param _dimensions Dimension information
                     * 
                     */
                    void SetDimensions(const std::vector<DimensionNew>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * Namespace ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Monitoring type
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * Dimension information
                     */
                    std::vector<DimensionNew> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACENEW_H_

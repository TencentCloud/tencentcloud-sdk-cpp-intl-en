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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Unified namespace information
                */
                class CommonNamespace : public AbstractModel
                {
                public:
                    CommonNamespace();
                    ~CommonNamespace() = default;
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
                     * 获取Namespace value
                     * @return Value Namespace value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Namespace value
                     * @param _value Namespace value
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Product name
                     * @return ProductName Product name
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Product name
                     * @param _productName Product name
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Configuration information
                     * @return Config Configuration information
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Configuration information
                     * @param _config Configuration information
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取List of supported regions
                     * @return AvailableRegions List of supported regions
                     * 
                     */
                    std::vector<std::string> GetAvailableRegions() const;

                    /**
                     * 设置List of supported regions
                     * @param _availableRegions List of supported regions
                     * 
                     */
                    void SetAvailableRegions(const std::vector<std::string>& _availableRegions);

                    /**
                     * 判断参数 AvailableRegions 是否已赋值
                     * @return AvailableRegions 是否已赋值
                     * 
                     */
                    bool AvailableRegionsHasBeenSet() const;

                    /**
                     * 获取Sort ID
                     * @return SortId Sort ID
                     * 
                     */
                    int64_t GetSortId() const;

                    /**
                     * 设置Sort ID
                     * @param _sortId Sort ID
                     * 
                     */
                    void SetSortId(const int64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取Unique ID in Dashboard
                     * @return DashboardId Unique ID in Dashboard
                     * 
                     */
                    std::string GetDashboardId() const;

                    /**
                     * 设置Unique ID in Dashboard
                     * @param _dashboardId Unique ID in Dashboard
                     * 
                     */
                    void SetDashboardId(const std::string& _dashboardId);

                    /**
                     * 判断参数 DashboardId 是否已赋值
                     * @return DashboardId 是否已赋值
                     * 
                     */
                    bool DashboardIdHasBeenSet() const;

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
                     * Namespace value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Product name
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Configuration information
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * List of supported regions
                     */
                    std::vector<std::string> m_availableRegions;
                    bool m_availableRegionsHasBeenSet;

                    /**
                     * Sort ID
                     */
                    int64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * Unique ID in Dashboard
                     */
                    std::string m_dashboardId;
                    bool m_dashboardIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_COMMONNAMESPACE_H_

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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPPLUGINLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPPLUGINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRaspPluginList request structure.
                */
                class DescribeRaspPluginListRequest : public AbstractModel
                {
                public:
                    DescribeRaspPluginListRequest();
                    ~DescribeRaspPluginListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset type
-CWP host security asset
-TCSS_HOST container host node
-TCSS_EKS Container Super Node
                     * @return AssetType Asset type
-CWP host security asset
-TCSS_HOST container host node
-TCSS_EKS Container Super Node
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
-CWP host security asset
-TCSS_HOST container host node
-TCSS_EKS Container Super Node
                     * @param _assetType Asset type
-CWP host security asset
-TCSS_HOST container host node
-TCSS_EKS Container Super Node
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取Machine unique ID
                     * @return QUUID Machine unique ID
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置Machine unique ID
                     * @param _qUUID Machine unique ID
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取Filter parameters
PluginStatus Plug-in status (Injecting, Injected successfully, Timed out, Plug-in exit, Injection failure)
process PID
Main class name of the process
                     * @return Filters Filter parameters
PluginStatus Plug-in status (Injecting, Injected successfully, Timed out, Plug-in exit, Injection failure)
process PID
Main class name of the process
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter parameters
PluginStatus Plug-in status (Injecting, Injected successfully, Timed out, Plug-in exit, Injection failure)
process PID
Main class name of the process
                     * @param _filters Filter parameters
PluginStatus Plug-in status (Injecting, Injected successfully, Timed out, Plug-in exit, Injection failure)
process PID
Main class name of the process
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries. Default value: 10.
                     * @return Limit Maximum number of entries. Default value: 10.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries. Default value: 10.
                     * @param _limit Maximum number of entries. Default value: 10.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Asset type
-CWP host security asset
-TCSS_HOST container host node
-TCSS_EKS Container Super Node
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Machine unique ID
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * Filter parameters
PluginStatus Plug-in status (Injecting, Injected successfully, Timed out, Plug-in exit, Injection failure)
process PID
Main class name of the process
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries. Default value: 10.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPPLUGINLISTREQUEST_H_

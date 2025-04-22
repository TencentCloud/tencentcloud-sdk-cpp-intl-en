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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMITEM_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ParamDetail.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ParamItem information
                */
                class ParamItem : public AbstractModel
                {
                public:
                    ParamItem();
                    ~ParamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeType Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeType Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeName Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeName Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Number of parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Number of parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Parameter information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Details Parameter information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ParamDetail> GetDetails() const;

                    /**
                     * 设置Parameter information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _details Parameter information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetails(const std::vector<ParamDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * Node type. Valid values: cn and dn.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Number of parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Parameter information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ParamDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMITEM_H_

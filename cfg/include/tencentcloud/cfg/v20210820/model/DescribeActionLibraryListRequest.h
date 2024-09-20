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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONLIBRARYLISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONLIBRARYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/ActionFilter.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeActionLibraryList request structure.
                */
                class DescribeActionLibraryListRequest : public AbstractModel
                {
                public:
                    DescribeActionLibraryListRequest();
                    ~DescribeActionLibraryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0-100
                     * @return Limit 0-100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置0-100
                     * @param _limit 0-100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Default value: 0
                     * @return Offset Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Default value: 0
                     * @param _offset Default value: 0
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
                     * 获取Object type ID
                     * @return ObjectType Object type ID
                     * 
                     */
                    uint64_t GetObjectType() const;

                    /**
                     * 设置Object type ID
                     * @param _objectType Object type ID
                     * 
                     */
                    void SetObjectType(const uint64_t& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取Keyword value {"action name": "a_title", "description": "a_desc", "action type": "a_type", "creation time": "a_create_time", "level-2 type": "a_resource_type"}
                     * @return Filters Keyword value {"action name": "a_title", "description": "a_desc", "action type": "a_type", "creation time": "a_create_time", "level-2 type": "a_resource_type"}
                     * 
                     */
                    std::vector<ActionFilter> GetFilters() const;

                    /**
                     * 设置Keyword value {"action name": "a_title", "description": "a_desc", "action type": "a_type", "creation time": "a_create_time", "level-2 type": "a_resource_type"}
                     * @param _filters Keyword value {"action name": "a_title", "description": "a_desc", "action type": "a_type", "creation time": "a_create_time", "level-2 type": "a_resource_type"}
                     * 
                     */
                    void SetFilters(const std::vector<ActionFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Action type. 1: fault action; 2: recovery action.
                     * @return Attribute Action type. 1: fault action; 2: recovery action.
                     * 
                     */
                    std::vector<int64_t> GetAttribute() const;

                    /**
                     * 设置Action type. 1: fault action; 2: recovery action.
                     * @param _attribute Action type. 1: fault action; 2: recovery action.
                     * 
                     */
                    void SetAttribute(const std::vector<int64_t>& _attribute);

                    /**
                     * 判断参数 Attribute 是否已赋值
                     * @return Attribute 是否已赋值
                     * 
                     */
                    bool AttributeHasBeenSet() const;

                    /**
                     * 获取Filter item - action ID
                     * @return ActionIds Filter item - action ID
                     * 
                     */
                    std::vector<uint64_t> GetActionIds() const;

                    /**
                     * 设置Filter item - action ID
                     * @param _actionIds Filter item - action ID
                     * 
                     */
                    void SetActionIds(const std::vector<uint64_t>& _actionIds);

                    /**
                     * 判断参数 ActionIds 是否已赋值
                     * @return ActionIds 是否已赋值
                     * 
                     */
                    bool ActionIdsHasBeenSet() const;

                private:

                    /**
                     * 0-100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Object type ID
                     */
                    uint64_t m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * Keyword value {"action name": "a_title", "description": "a_desc", "action type": "a_type", "creation time": "a_create_time", "level-2 type": "a_resource_type"}
                     */
                    std::vector<ActionFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Action type. 1: fault action; 2: recovery action.
                     */
                    std::vector<int64_t> m_attribute;
                    bool m_attributeHasBeenSet;

                    /**
                     * Filter item - action ID
                     */
                    std::vector<uint64_t> m_actionIds;
                    bool m_actionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONLIBRARYLISTREQUEST_H_

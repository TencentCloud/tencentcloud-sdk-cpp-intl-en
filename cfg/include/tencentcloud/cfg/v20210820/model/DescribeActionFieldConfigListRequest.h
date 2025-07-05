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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONFIELDCONFIGLISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONFIELDCONFIGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeActionFieldConfigList request structure.
                */
                class DescribeActionFieldConfigListRequest : public AbstractModel
                {
                public:
                    DescribeActionFieldConfigListRequest();
                    ~DescribeActionFieldConfigListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Action ID list
                     * @return ActionIds Action ID list
                     * 
                     */
                    std::vector<uint64_t> GetActionIds() const;

                    /**
                     * 设置Action ID list
                     * @param _actionIds Action ID list
                     * 
                     */
                    void SetActionIds(const std::vector<uint64_t>& _actionIds);

                    /**
                     * 判断参数 ActionIds 是否已赋值
                     * @return ActionIds 是否已赋值
                     * 
                     */
                    bool ActionIdsHasBeenSet() const;

                    /**
                     * 获取Object type ID
                     * @return ObjectTypeId Object type ID
                     * 
                     */
                    uint64_t GetObjectTypeId() const;

                    /**
                     * 设置Object type ID
                     * @param _objectTypeId Object type ID
                     * 
                     */
                    void SetObjectTypeId(const uint64_t& _objectTypeId);

                    /**
                     * 判断参数 ObjectTypeId 是否已赋值
                     * @return ObjectTypeId 是否已赋值
                     * 
                     */
                    bool ObjectTypeIdHasBeenSet() const;

                private:

                    /**
                     * Action ID list
                     */
                    std::vector<uint64_t> m_actionIds;
                    bool m_actionIdsHasBeenSet;

                    /**
                     * Object type ID
                     */
                    uint64_t m_objectTypeId;
                    bool m_objectTypeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEACTIONFIELDCONFIGLISTREQUEST_H_

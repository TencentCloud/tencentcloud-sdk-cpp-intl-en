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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DELETEL3CONNREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DELETEL3CONNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * DeleteL3Conn request structure.
                */
                class DeleteL3ConnRequest : public AbstractModel
                {
                public:
                    DeleteL3ConnRequest();
                    ~DeleteL3ConnRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of interconnection rule IDs
                     * @return L3ConnIdList List of interconnection rule IDs
                     * 
                     */
                    std::vector<std::string> GetL3ConnIdList() const;

                    /**
                     * 设置List of interconnection rule IDs
                     * @param _l3ConnIdList List of interconnection rule IDs
                     * 
                     */
                    void SetL3ConnIdList(const std::vector<std::string>& _l3ConnIdList);

                    /**
                     * 判断参数 L3ConnIdList 是否已赋值
                     * @return L3ConnIdList 是否已赋值
                     * 
                     */
                    bool L3ConnIdListHasBeenSet() const;

                private:

                    /**
                     * List of interconnection rule IDs
                     */
                    std::vector<std::string> m_l3ConnIdList;
                    bool m_l3ConnIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DELETEL3CONNREQUEST_H_

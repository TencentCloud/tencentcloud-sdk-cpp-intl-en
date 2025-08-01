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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPCOUNTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetAppCount request structure.
                */
                class DescribeAssetAppCountRequest : public AbstractModel
                {
                public:
                    DescribeAssetAppCountRequest();
                    ~DescribeAssetAppCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Search criteria: Search for processes of all software whose names contain Name and return a list.
                     * @return Name Search criteria: Search for processes of all software whose names contain Name and return a list.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Search criteria: Search for processes of all software whose names contain Name and return a list.
                     * @param _name Search criteria: Search for processes of all software whose names contain Name and return a list.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Search criteria: Search for processes of all software whose names contain Name and return a list.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPCOUNTREQUEST_H_

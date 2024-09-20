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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTREQUEST_H_

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
                * DescribeObjectTypeList request structure.
                */
                class DescribeObjectTypeListRequest : public AbstractModel
                {
                public:
                    DescribeObjectTypeListRequest();
                    ~DescribeObjectTypeListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Supported object
0: all platform products
1: objects connected to the platform
2: some objects supported by the application
                     * @return SupportType Supported object
0: all platform products
1: objects connected to the platform
2: some objects supported by the application
                     * 
                     */
                    int64_t GetSupportType() const;

                    /**
                     * 设置Supported object
0: all platform products
1: objects connected to the platform
2: some objects supported by the application
                     * @param _supportType Supported object
0: all platform products
1: objects connected to the platform
2: some objects supported by the application
                     * 
                     */
                    void SetSupportType(const int64_t& _supportType);

                    /**
                     * 判断参数 SupportType 是否已赋值
                     * @return SupportType 是否已赋值
                     * 
                     */
                    bool SupportTypeHasBeenSet() const;

                private:

                    /**
                     * Supported object
0: all platform products
1: objects connected to the platform
2: some objects supported by the application
                     */
                    int64_t m_supportType;
                    bool m_supportTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTREQUEST_H_

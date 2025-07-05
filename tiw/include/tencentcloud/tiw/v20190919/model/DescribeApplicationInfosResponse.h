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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONINFOSRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONINFOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/ApplicationItem.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeApplicationInfos response structure.
                */
                class DescribeApplicationInfosResponse : public AbstractModel
                {
                public:
                    DescribeApplicationInfosResponse();
                    ~DescribeApplicationInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application list.
                     * @return ApplicationInfos Application list.
                     * 
                     */
                    std::vector<ApplicationItem> GetApplicationInfos() const;

                    /**
                     * 判断参数 ApplicationInfos 是否已赋值
                     * @return ApplicationInfos 是否已赋值
                     * 
                     */
                    bool ApplicationInfosHasBeenSet() const;

                    /**
                     * 获取Specifies whether all applications are included. The value 0 indicates no and 1 indicates yes.
                     * @return AllOption Specifies whether all applications are included. The value 0 indicates no and 1 indicates yes.
                     * 
                     */
                    int64_t GetAllOption() const;

                    /**
                     * 判断参数 AllOption 是否已赋值
                     * @return AllOption 是否已赋值
                     * 
                     */
                    bool AllOptionHasBeenSet() const;

                private:

                    /**
                     * Application list.
                     */
                    std::vector<ApplicationItem> m_applicationInfos;
                    bool m_applicationInfosHasBeenSet;

                    /**
                     * Specifies whether all applications are included. The value 0 indicates no and 1 indicates yes.
                     */
                    int64_t m_allOption;
                    bool m_allOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONINFOSRESPONSE_H_

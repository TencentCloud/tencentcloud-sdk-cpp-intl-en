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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECCCBUYINFOLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECCCBUYINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeCCCBuyInfoList request structure.
                */
                class DescribeCCCBuyInfoListRequest : public AbstractModel
                {
                public:
                    DescribeCCCBuyInfoListRequest();
                    ~DescribeCCCBuyInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id list, query all applications when not transmitted.
                     * @return SdkAppIds Application id list, query all applications when not transmitted.
                     * 
                     */
                    std::vector<int64_t> GetSdkAppIds() const;

                    /**
                     * 设置Application id list, query all applications when not transmitted.
                     * @param _sdkAppIds Application id list, query all applications when not transmitted.
                     * 
                     */
                    void SetSdkAppIds(const std::vector<int64_t>& _sdkAppIds);

                    /**
                     * 判断参数 SdkAppIds 是否已赋值
                     * @return SdkAppIds 是否已赋值
                     * 
                     */
                    bool SdkAppIdsHasBeenSet() const;

                private:

                    /**
                     * Application id list, query all applications when not transmitted.
                     */
                    std::vector<int64_t> m_sdkAppIds;
                    bool m_sdkAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECCCBUYINFOLISTREQUEST_H_

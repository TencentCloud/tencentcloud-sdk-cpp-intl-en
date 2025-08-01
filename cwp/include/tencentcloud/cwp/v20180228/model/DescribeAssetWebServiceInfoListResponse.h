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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBSERVICEINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBSERVICEINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetWebServiceBaseInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetWebServiceInfoList response structure.
                */
                class DescribeAssetWebServiceInfoListResponse : public AbstractModel
                {
                public:
                    DescribeAssetWebServiceInfoListResponse();
                    ~DescribeAssetWebServiceInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WebServices List
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AssetWebServiceBaseInfo> GetWebServices() const;

                    /**
                     * 判断参数 WebServices 是否已赋值
                     * @return WebServices 是否已赋值
                     * 
                     */
                    bool WebServicesHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return Total Total number
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * List
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AssetWebServiceBaseInfo> m_webServices;
                    bool m_webServicesHasBeenSet;

                    /**
                     * Total number
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBSERVICEINFOLISTRESPONSE_H_

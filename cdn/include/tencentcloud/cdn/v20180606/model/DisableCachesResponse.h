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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DISABLECACHESRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DISABLECACHESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CacheOptResult.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DisableCaches response structure.
                */
                class DisableCachesResponse : public AbstractModel
                {
                public:
                    DisableCachesResponse();
                    ~DisableCachesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Submission result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheOptResult Submission result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheOptResult GetCacheOptResult() const;

                    /**
                     * 判断参数 CacheOptResult 是否已赋值
                     * @return CacheOptResult 是否已赋值
                     */
                    bool CacheOptResultHasBeenSet() const;

                private:

                    /**
                     * Submission result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CacheOptResult m_cacheOptResult;
                    bool m_cacheOptResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DISABLECACHESRESPONSE_H_

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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVALUEADDEDSRVINFORESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVALUEADDEDSRVINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeValueAddedSrvInfo response structure.
                */
                class DescribeValueAddedSrvInfoResponse : public AbstractModel
                {
                public:
                    DescribeValueAddedSrvInfoResponse();
                    ~DescribeValueAddedSrvInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of unlicensed repository images
                     * @return RegistryImageCnt Number of unlicensed repository images
                     * 
                     */
                    uint64_t GetRegistryImageCnt() const;

                    /**
                     * 判断参数 RegistryImageCnt 是否已赋值
                     * @return RegistryImageCnt 是否已赋值
                     * 
                     */
                    bool RegistryImageCntHasBeenSet() const;

                    /**
                     * 获取Number of unlicensed local images
                     * @return LocalImageCnt Number of unlicensed local images
                     * 
                     */
                    uint64_t GetLocalImageCnt() const;

                    /**
                     * 判断参数 LocalImageCnt 是否已赋值
                     * @return LocalImageCnt 是否已赋值
                     * 
                     */
                    bool LocalImageCntHasBeenSet() const;

                    /**
                     * 获取Number of unused image security scan licenses
                     * @return UnusedAuthorizedCnt Number of unused image security scan licenses
                     * 
                     */
                    uint64_t GetUnusedAuthorizedCnt() const;

                    /**
                     * 判断参数 UnusedAuthorizedCnt 是否已赋值
                     * @return UnusedAuthorizedCnt 是否已赋值
                     * 
                     */
                    bool UnusedAuthorizedCntHasBeenSet() const;

                private:

                    /**
                     * Number of unlicensed repository images
                     */
                    uint64_t m_registryImageCnt;
                    bool m_registryImageCntHasBeenSet;

                    /**
                     * Number of unlicensed local images
                     */
                    uint64_t m_localImageCnt;
                    bool m_localImageCntHasBeenSet;

                    /**
                     * Number of unused image security scan licenses
                     */
                    uint64_t m_unusedAuthorizedCnt;
                    bool m_unusedAuthorizedCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVALUEADDEDSRVINFORESPONSE_H_

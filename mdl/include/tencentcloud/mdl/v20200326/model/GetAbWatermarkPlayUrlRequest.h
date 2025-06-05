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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_GETABWATERMARKPLAYURLREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_GETABWATERMARKPLAYURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * GetAbWatermarkPlayUrl request structure.
                */
                class GetAbWatermarkPlayUrlRequest : public AbstractModel
                {
                public:
                    GetAbWatermarkPlayUrlRequest();
                    ~GetAbWatermarkPlayUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Client UUID, 32-bit unsigned integer, [0, 4294967295].
                     * @return Uuid Client UUID, 32-bit unsigned integer, [0, 4294967295].
                     * 
                     */
                    uint64_t GetUuid() const;

                    /**
                     * 设置Client UUID, 32-bit unsigned integer, [0, 4294967295].
                     * @param _uuid Client UUID, 32-bit unsigned integer, [0, 4294967295].
                     * 
                     */
                    void SetUuid(const uint64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Channel ID of Stream Package.
                     * @return StreamPackageChannelId Channel ID of Stream Package.
                     * 
                     */
                    std::string GetStreamPackageChannelId() const;

                    /**
                     * 设置Channel ID of Stream Package.
                     * @param _streamPackageChannelId Channel ID of Stream Package.
                     * 
                     */
                    void SetStreamPackageChannelId(const std::string& _streamPackageChannelId);

                    /**
                     * 判断参数 StreamPackageChannelId 是否已赋值
                     * @return StreamPackageChannelId 是否已赋值
                     * 
                     */
                    bool StreamPackageChannelIdHasBeenSet() const;

                    /**
                     * 获取Original play URL.
                     * @return Url Original play URL.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Original play URL.
                     * @param _url Original play URL.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Client UUID, 32-bit unsigned integer, [0, 4294967295].
                     */
                    uint64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Channel ID of Stream Package.
                     */
                    std::string m_streamPackageChannelId;
                    bool m_streamPackageChannelIdHasBeenSet;

                    /**
                     * Original play URL.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_GETABWATERMARKPLAYURLREQUEST_H_

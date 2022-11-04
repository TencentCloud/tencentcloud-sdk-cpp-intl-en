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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPUBLISHCDNPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPUBLISHCDNPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The relaying parameters.
                */
                class McuPublishCdnParam : public AbstractModel
                {
                public:
                    McuPublishCdnParam();
                    ~McuPublishCdnParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URLs of the CDNs to relay to.
                     * @return PublishCdnUrl The URLs of the CDNs to relay to.
                     */
                    std::string GetPublishCdnUrl() const;

                    /**
                     * 设置The URLs of the CDNs to relay to.
                     * @param PublishCdnUrl The URLs of the CDNs to relay to.
                     */
                    void SetPublishCdnUrl(const std::string& _publishCdnUrl);

                    /**
                     * 判断参数 PublishCdnUrl 是否已赋值
                     * @return PublishCdnUrl 是否已赋值
                     */
                    bool PublishCdnUrlHasBeenSet() const;

                    /**
                     * 获取Whether to relay to Tencent Cloud’s CDN. 0: Third-party CDN; 1 (default): Tencent Cloud’s CDN. Relaying to a third-party CDN will incur fees. To avoid unexpected charges, we recommend you pass in a specific value. For details, see the API document.
                     * @return IsTencentCdn Whether to relay to Tencent Cloud’s CDN. 0: Third-party CDN; 1 (default): Tencent Cloud’s CDN. Relaying to a third-party CDN will incur fees. To avoid unexpected charges, we recommend you pass in a specific value. For details, see the API document.
                     */
                    uint64_t GetIsTencentCdn() const;

                    /**
                     * 设置Whether to relay to Tencent Cloud’s CDN. 0: Third-party CDN; 1 (default): Tencent Cloud’s CDN. Relaying to a third-party CDN will incur fees. To avoid unexpected charges, we recommend you pass in a specific value. For details, see the API document.
                     * @param IsTencentCdn Whether to relay to Tencent Cloud’s CDN. 0: Third-party CDN; 1 (default): Tencent Cloud’s CDN. Relaying to a third-party CDN will incur fees. To avoid unexpected charges, we recommend you pass in a specific value. For details, see the API document.
                     */
                    void SetIsTencentCdn(const uint64_t& _isTencentCdn);

                    /**
                     * 判断参数 IsTencentCdn 是否已赋值
                     * @return IsTencentCdn 是否已赋值
                     */
                    bool IsTencentCdnHasBeenSet() const;

                private:

                    /**
                     * The URLs of the CDNs to relay to.
                     */
                    std::string m_publishCdnUrl;
                    bool m_publishCdnUrlHasBeenSet;

                    /**
                     * Whether to relay to Tencent Cloud’s CDN. 0: Third-party CDN; 1 (default): Tencent Cloud’s CDN. Relaying to a third-party CDN will incur fees. To avoid unexpected charges, we recommend you pass in a specific value. For details, see the API document.
                     */
                    uint64_t m_isTencentCdn;
                    bool m_isTencentCdnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUPUBLISHCDNPARAM_H_

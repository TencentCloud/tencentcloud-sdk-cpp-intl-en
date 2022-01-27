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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_PUBLISHCDNPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_PUBLISHCDNPARAMS_H_

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
                * Relayed push parameters of a non-Tencent Cloud CDN
                */
                class PublishCdnParams : public AbstractModel
                {
                public:
                    PublishCdnParams();
                    ~PublishCdnParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tencent Cloud LVB BizId
                     * @return BizId Tencent Cloud LVB BizId
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置Tencent Cloud LVB BizId
                     * @param BizId Tencent Cloud LVB BizId
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Destination of non-Tencent Cloud CDN relayed push. It is possible to push to only one non-Tencent Cloud CDN address at a time.
                     * @return PublishCdnUrls Destination of non-Tencent Cloud CDN relayed push. It is possible to push to only one non-Tencent Cloud CDN address at a time.
                     */
                    std::vector<std::string> GetPublishCdnUrls() const;

                    /**
                     * 设置Destination of non-Tencent Cloud CDN relayed push. It is possible to push to only one non-Tencent Cloud CDN address at a time.
                     * @param PublishCdnUrls Destination of non-Tencent Cloud CDN relayed push. It is possible to push to only one non-Tencent Cloud CDN address at a time.
                     */
                    void SetPublishCdnUrls(const std::vector<std::string>& _publishCdnUrls);

                    /**
                     * 判断参数 PublishCdnUrls 是否已赋值
                     * @return PublishCdnUrls 是否已赋值
                     */
                    bool PublishCdnUrlsHasBeenSet() const;

                private:

                    /**
                     * Tencent Cloud LVB BizId
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Destination of non-Tencent Cloud CDN relayed push. It is possible to push to only one non-Tencent Cloud CDN address at a time.
                     */
                    std::vector<std::string> m_publishCdnUrls;
                    bool m_publishCdnUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_PUBLISHCDNPARAMS_H_
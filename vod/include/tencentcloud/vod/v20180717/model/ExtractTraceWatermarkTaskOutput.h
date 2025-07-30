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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The output of digital watermark extraction.
                */
                class ExtractTraceWatermarkTaskOutput : public AbstractModel
                {
                public:
                    ExtractTraceWatermarkTaskOutput();
                    ~ExtractTraceWatermarkTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The distributor’s user ID, which is a six-digit hex number. This parameter is relevant when [digital watermarks](https://intl.cloud.tencent.com/document/product/266/75789?from_cn_redirect=1) are used.
                     * @return Uv The distributor’s user ID, which is a six-digit hex number. This parameter is relevant when [digital watermarks](https://intl.cloud.tencent.com/document/product/266/75789?from_cn_redirect=1) are used.
                     * 
                     */
                    std::string GetUv() const;

                    /**
                     * 设置The distributor’s user ID, which is a six-digit hex number. This parameter is relevant when [digital watermarks](https://intl.cloud.tencent.com/document/product/266/75789?from_cn_redirect=1) are used.
                     * @param _uv The distributor’s user ID, which is a six-digit hex number. This parameter is relevant when [digital watermarks](https://intl.cloud.tencent.com/document/product/266/75789?from_cn_redirect=1) are used.
                     * 
                     */
                    void SetUv(const std::string& _uv);

                    /**
                     * 判断参数 Uv 是否已赋值
                     * @return Uv 是否已赋值
                     * 
                     */
                    bool UvHasBeenSet() const;

                    /**
                     * 获取This parameter has been deprecated.
                     * @return Uid This parameter has been deprecated.
                     * @deprecated
                     */
                    std::string GetUid() const;

                    /**
                     * 设置This parameter has been deprecated.
                     * @param _uid This parameter has been deprecated.
                     * @deprecated
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * @deprecated
                     */
                    bool UidHasBeenSet() const;

                private:

                    /**
                     * The distributor’s user ID, which is a six-digit hex number. This parameter is relevant when [digital watermarks](https://intl.cloud.tencent.com/document/product/266/75789?from_cn_redirect=1) are used.
                     */
                    std::string m_uv;
                    bool m_uvHasBeenSet;

                    /**
                     * This parameter has been deprecated.
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKTASKOUTPUT_H_

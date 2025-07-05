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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_IMAGEOPTIMIZATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_IMAGEOPTIMIZATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/WebpAdapter.h>
#include <tencentcloud/cdn/v20180606/model/TpgAdapter.h>
#include <tencentcloud/cdn/v20180606/model/GuetzliAdapter.h>
#include <tencentcloud/cdn/v20180606/model/AvifAdapter.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Image optimization configuration
                */
                class ImageOptimization : public AbstractModel
                {
                public:
                    ImageOptimization();
                    ~ImageOptimization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`WebpAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return WebpAdapter `WebpAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    WebpAdapter GetWebpAdapter() const;

                    /**
                     * 设置`WebpAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _webpAdapter `WebpAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWebpAdapter(const WebpAdapter& _webpAdapter);

                    /**
                     * 判断参数 WebpAdapter 是否已赋值
                     * @return WebpAdapter 是否已赋值
                     * 
                     */
                    bool WebpAdapterHasBeenSet() const;

                    /**
                     * 获取`TpgAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TpgAdapter `TpgAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    TpgAdapter GetTpgAdapter() const;

                    /**
                     * 设置`TpgAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _tpgAdapter `TpgAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTpgAdapter(const TpgAdapter& _tpgAdapter);

                    /**
                     * 判断参数 TpgAdapter 是否已赋值
                     * @return TpgAdapter 是否已赋值
                     * 
                     */
                    bool TpgAdapterHasBeenSet() const;

                    /**
                     * 获取`GuetzliAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return GuetzliAdapter `GuetzliAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    GuetzliAdapter GetGuetzliAdapter() const;

                    /**
                     * 设置`GuetzliAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _guetzliAdapter `GuetzliAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGuetzliAdapter(const GuetzliAdapter& _guetzliAdapter);

                    /**
                     * 判断参数 GuetzliAdapter 是否已赋值
                     * @return GuetzliAdapter 是否已赋值
                     * 
                     */
                    bool GuetzliAdapterHasBeenSet() const;

                    /**
                     * 获取AVIF adapter configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AvifAdapter AVIF adapter configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AvifAdapter GetAvifAdapter() const;

                    /**
                     * 设置AVIF adapter configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _avifAdapter AVIF adapter configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAvifAdapter(const AvifAdapter& _avifAdapter);

                    /**
                     * 判断参数 AvifAdapter 是否已赋值
                     * @return AvifAdapter 是否已赋值
                     * 
                     */
                    bool AvifAdapterHasBeenSet() const;

                private:

                    /**
                     * `WebpAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    WebpAdapter m_webpAdapter;
                    bool m_webpAdapterHasBeenSet;

                    /**
                     * `TpgAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    TpgAdapter m_tpgAdapter;
                    bool m_tpgAdapterHasBeenSet;

                    /**
                     * `GuetzliAdapter` configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    GuetzliAdapter m_guetzliAdapter;
                    bool m_guetzliAdapterHasBeenSet;

                    /**
                     * AVIF adapter configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AvifAdapter m_avifAdapter;
                    bool m_avifAdapterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_IMAGEOPTIMIZATION_H_

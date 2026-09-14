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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SimpleAesDrm.h>
#include <tencentcloud/mps/v20190612/model/SpekeDrm.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Drm encryption information.
                */
                class DrmInfo : public AbstractModel
                {
                public:
                    DrmInfo();
                    ~DrmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encryption type.

- simpleaes
Can only be used for HLS. Format support: ts and mp4.
Only slice mode can be used. singlefile mode cannot be used.

- fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- playready:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- widevine+fairplay,playready+fairplay,widevine+playready+fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine+playready:
Applicable to HLS and MPEG-DASH. The segment format can only be mp4.
For HLS format, you can use the slicing mode or singlefile mode.
For MPEG-DASH, only singlefile mode can be used.
                     * @return Type Encryption type.

- simpleaes
Can only be used for HLS. Format support: ts and mp4.
Only slice mode can be used. singlefile mode cannot be used.

- fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- playready:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- widevine+fairplay,playready+fairplay,widevine+playready+fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine+playready:
Applicable to HLS and MPEG-DASH. The segment format can only be mp4.
For HLS format, you can use the slicing mode or singlefile mode.
For MPEG-DASH, only singlefile mode can be used.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Encryption type.

- simpleaes
Can only be used for HLS. Format support: ts and mp4.
Only slice mode can be used. singlefile mode cannot be used.

- fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- playready:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- widevine+fairplay,playready+fairplay,widevine+playready+fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine+playready:
Applicable to HLS and MPEG-DASH. The segment format can only be mp4.
For HLS format, you can use the slicing mode or singlefile mode.
For MPEG-DASH, only singlefile mode can be used.
                     * @param _type Encryption type.

- simpleaes
Can only be used for HLS. Format support: ts and mp4.
Only slice mode can be used. singlefile mode cannot be used.

- fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- playready:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- widevine+fairplay,playready+fairplay,widevine+playready+fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine+playready:
Applicable to HLS and MPEG-DASH. The segment format can only be mp4.
For HLS format, you can use the slicing mode or singlefile mode.
For MPEG-DASH, only singlefile mode can be used.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SimpleAesDrm 
                     * 
                     */
                    SimpleAesDrm GetSimpleAesDrm() const;

                    /**
                     * 设置
                     * @param _simpleAesDrm 
                     * 
                     */
                    void SetSimpleAesDrm(const SimpleAesDrm& _simpleAesDrm);

                    /**
                     * 判断参数 SimpleAesDrm 是否已赋值
                     * @return SimpleAesDrm 是否已赋值
                     * 
                     */
                    bool SimpleAesDrmHasBeenSet() const;

                    /**
                     * 获取Information about FairPlay, WideVine, and PlayReady encryption.
                     * @return SpekeDrm Information about FairPlay, WideVine, and PlayReady encryption.
                     * 
                     */
                    SpekeDrm GetSpekeDrm() const;

                    /**
                     * 设置Information about FairPlay, WideVine, and PlayReady encryption.
                     * @param _spekeDrm Information about FairPlay, WideVine, and PlayReady encryption.
                     * 
                     */
                    void SetSpekeDrm(const SpekeDrm& _spekeDrm);

                    /**
                     * 判断参数 SpekeDrm 是否已赋值
                     * @return SpekeDrm 是否已赋值
                     * 
                     */
                    bool SpekeDrmHasBeenSet() const;

                private:

                    /**
                     * Encryption type.

- simpleaes
Can only be used for HLS. Format support: ts and mp4.
Only slice mode can be used. singlefile mode cannot be used.

- fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- playready:
Can be used for HLS and DASH. The segment format can only be mp4.
Output HLS: The slicing or singlefile mode can be used.
Output DASH: can only be in singlefile mode

- widevine+fairplay,playready+fairplay,widevine+playready+fairplay:
Can only be used for HLS. The segment format can only be mp4.
Slice mode or singlefile mode can be used.

- widevine+playready:
Applicable to HLS and MPEG-DASH. The segment format can only be mp4.
For HLS format, you can use the slicing mode or singlefile mode.
For MPEG-DASH, only singlefile mode can be used.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    SimpleAesDrm m_simpleAesDrm;
                    bool m_simpleAesDrmHasBeenSet;

                    /**
                     * Information about FairPlay, WideVine, and PlayReady encryption.
                     */
                    SpekeDrm m_spekeDrm;
                    bool m_spekeDrmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DRMINFO_H_

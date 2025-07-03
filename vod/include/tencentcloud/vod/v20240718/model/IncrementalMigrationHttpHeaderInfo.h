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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPHEADERINFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPHEADERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpHeader.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * Incremental migration back-to-origin HTTP Header information.
                */
                class IncrementalMigrationHttpHeaderInfo : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpHeaderInfo();
                    ~IncrementalMigrationHttpHeaderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP Header Passthrough Mode. Values valid:
<li>FOLLOW_ALL: Pass through all header information;<\li>
<li>FOLLOW_PART: Pass through partial header information;<\li>
<li>IGNORE_PART: Ignore partial header information.<\li>
                     * @return HeaderFollowMode HTTP Header Passthrough Mode. Values valid:
<li>FOLLOW_ALL: Pass through all header information;<\li>
<li>FOLLOW_PART: Pass through partial header information;<\li>
<li>IGNORE_PART: Ignore partial header information.<\li>
                     * 
                     */
                    std::string GetHeaderFollowMode() const;

                    /**
                     * 设置HTTP Header Passthrough Mode. Values valid:
<li>FOLLOW_ALL: Pass through all header information;<\li>
<li>FOLLOW_PART: Pass through partial header information;<\li>
<li>IGNORE_PART: Ignore partial header information.<\li>
                     * @param _headerFollowMode HTTP Header Passthrough Mode. Values valid:
<li>FOLLOW_ALL: Pass through all header information;<\li>
<li>FOLLOW_PART: Pass through partial header information;<\li>
<li>IGNORE_PART: Ignore partial header information.<\li>
                     * 
                     */
                    void SetHeaderFollowMode(const std::string& _headerFollowMode);

                    /**
                     * 判断参数 HeaderFollowMode 是否已赋值
                     * @return HeaderFollowMode 是否已赋值
                     * 
                     */
                    bool HeaderFollowModeHasBeenSet() const;

                    /**
                     * 获取Header Key Set for Passthrough. This field is required only when the HeaderFollowMode is set to `FOLLOW_PART`.
                     * @return FollowHttpHeaderKeySet Header Key Set for Passthrough. This field is required only when the HeaderFollowMode is set to `FOLLOW_PART`.
                     * 
                     */
                    std::vector<std::string> GetFollowHttpHeaderKeySet() const;

                    /**
                     * 设置Header Key Set for Passthrough. This field is required only when the HeaderFollowMode is set to `FOLLOW_PART`.
                     * @param _followHttpHeaderKeySet Header Key Set for Passthrough. This field is required only when the HeaderFollowMode is set to `FOLLOW_PART`.
                     * 
                     */
                    void SetFollowHttpHeaderKeySet(const std::vector<std::string>& _followHttpHeaderKeySet);

                    /**
                     * 判断参数 FollowHttpHeaderKeySet 是否已赋值
                     * @return FollowHttpHeaderKeySet 是否已赋值
                     * 
                     */
                    bool FollowHttpHeaderKeySetHasBeenSet() const;

                    /**
                     * 获取Add Header Key-Value Pair Collection.
                     * @return NewHttpHeaderSet Add Header Key-Value Pair Collection.
                     * 
                     */
                    std::vector<IncrementalMigrationHttpHeader> GetNewHttpHeaderSet() const;

                    /**
                     * 设置Add Header Key-Value Pair Collection.
                     * @param _newHttpHeaderSet Add Header Key-Value Pair Collection.
                     * 
                     */
                    void SetNewHttpHeaderSet(const std::vector<IncrementalMigrationHttpHeader>& _newHttpHeaderSet);

                    /**
                     * 判断参数 NewHttpHeaderSet 是否已赋值
                     * @return NewHttpHeaderSet 是否已赋值
                     * 
                     */
                    bool NewHttpHeaderSetHasBeenSet() const;

                private:

                    /**
                     * HTTP Header Passthrough Mode. Values valid:
<li>FOLLOW_ALL: Pass through all header information;<\li>
<li>FOLLOW_PART: Pass through partial header information;<\li>
<li>IGNORE_PART: Ignore partial header information.<\li>
                     */
                    std::string m_headerFollowMode;
                    bool m_headerFollowModeHasBeenSet;

                    /**
                     * Header Key Set for Passthrough. This field is required only when the HeaderFollowMode is set to `FOLLOW_PART`.
                     */
                    std::vector<std::string> m_followHttpHeaderKeySet;
                    bool m_followHttpHeaderKeySetHasBeenSet;

                    /**
                     * Add Header Key-Value Pair Collection.
                     */
                    std::vector<IncrementalMigrationHttpHeader> m_newHttpHeaderSet;
                    bool m_newHttpHeaderSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPHEADERINFO_H_

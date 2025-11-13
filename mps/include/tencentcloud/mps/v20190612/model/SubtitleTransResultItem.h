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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Subtitle translation output result.
                */
                class SubtitleTransResultItem : public AbstractModel
                {
                public:
                    SubtitleTransResultItem();
                    ~SubtitleTransResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Translation marker.
- Success
- Error
                     * @return Status Translation marker.
- Success
- Error
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Translation marker.
- Success
- Error
                     * @param _status Translation marker.
- Success
- Error
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Source language (such as "en").
                     * @return TransSrc Source language (such as "en").
                     * 
                     */
                    std::string GetTransSrc() const;

                    /**
                     * 设置Source language (such as "en").
                     * @param _transSrc Source language (such as "en").
                     * 
                     */
                    void SetTransSrc(const std::string& _transSrc);

                    /**
                     * 判断参数 TransSrc 是否已赋值
                     * @return TransSrc 是否已赋值
                     * 
                     */
                    bool TransSrcHasBeenSet() const;

                    /**
                     * 获取Target language (such as "zh").
                     * @return TransDst Target language (such as "zh").
                     * 
                     */
                    std::string GetTransDst() const;

                    /**
                     * 设置Target language (such as "zh").
                     * @param _transDst Target language (such as "zh").
                     * 
                     */
                    void SetTransDst(const std::string& _transDst);

                    /**
                     * 判断参数 TransDst 是否已赋值
                     * @return TransDst 是否已赋值
                     * 
                     */
                    bool TransDstHasBeenSet() const;

                    /**
                     * 获取Subtitle file URL.
                     * @return Path Subtitle file URL.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Subtitle file URL.
                     * @param _path Subtitle file URL.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * Translation marker.
- Success
- Error
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Source language (such as "en").
                     */
                    std::string m_transSrc;
                    bool m_transSrcHasBeenSet;

                    /**
                     * Target language (such as "zh").
                     */
                    std::string m_transDst;
                    bool m_transDstHasBeenSet;

                    /**
                     * Subtitle file URL.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_

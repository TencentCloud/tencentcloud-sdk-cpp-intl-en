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
                     * 获取<p>Translation flag:</p><ul><li>Success</li><li>Error</li></ul>
                     * @return Status <p>Translation flag:</p><ul><li>Success</li><li>Error</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Translation flag:</p><ul><li>Success</li><li>Error</li></ul>
                     * @param _status <p>Translation flag:</p><ul><li>Success</li><li>Error</li></ul>
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
                     * 获取<p>Source language (such as "en")</p>
                     * @return TransSrc <p>Source language (such as "en")</p>
                     * 
                     */
                    std::string GetTransSrc() const;

                    /**
                     * 设置<p>Source language (such as "en")</p>
                     * @param _transSrc <p>Source language (such as "en")</p>
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
                     * 获取<p>Target language (such as "zh")</p>
                     * @return TransDst <p>Target language (such as "zh")</p>
                     * 
                     */
                    std::string GetTransDst() const;

                    /**
                     * 设置<p>Target language (such as "zh")</p>
                     * @param _transDst <p>Target language (such as "zh")</p>
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
                     * 获取<p>Subtitle file URL</p>
                     * @return Path <p>Subtitle file URL</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Subtitle file URL</p>
                     * @param _path <p>Subtitle file URL</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Subtitle translation suppression video path.</p>
                     * @return SubtitleEmbedPath <p>Subtitle translation suppression video path.</p>
                     * 
                     */
                    std::string GetSubtitleEmbedPath() const;

                    /**
                     * 设置<p>Subtitle translation suppression video path.</p>
                     * @param _subtitleEmbedPath <p>Subtitle translation suppression video path.</p>
                     * 
                     */
                    void SetSubtitleEmbedPath(const std::string& _subtitleEmbedPath);

                    /**
                     * 判断参数 SubtitleEmbedPath 是否已赋值
                     * @return SubtitleEmbedPath 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedPathHasBeenSet() const;

                private:

                    /**
                     * <p>Translation flag:</p><ul><li>Success</li><li>Error</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Source language (such as "en")</p>
                     */
                    std::string m_transSrc;
                    bool m_transSrcHasBeenSet;

                    /**
                     * <p>Target language (such as "zh")</p>
                     */
                    std::string m_transDst;
                    bool m_transDstHasBeenSet;

                    /**
                     * <p>Subtitle file URL</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Subtitle translation suppression video path.</p>
                     */
                    std::string m_subtitleEmbedPath;
                    bool m_subtitleEmbedPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLETRANSRESULTITEM_H_

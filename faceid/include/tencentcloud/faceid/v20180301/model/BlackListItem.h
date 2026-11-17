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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_BLACKLISTITEM_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_BLACKLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * BlackListItem
                */
                class BlackListItem : public AbstractModel
                {
                public:
                    BlackListItem();
                    ~BlackListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Blocklist entry ID, customized by the customer when creating the entry, used to trace which entry is matched.</p>
                     * @return ModelId <p>Blocklist entry ID, customized by the customer when creating the entry, used to trace which entry is matched.</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>Blocklist entry ID, customized by the customer when creating the entry, used to trace which entry is matched.</p>
                     * @param _modelId <p>Blocklist entry ID, customized by the customer when creating the entry, used to trace which entry is matched.</p>
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>Entry type. Currently only face is supported.</p>
                     * @return ModelType <p>Entry type. Currently only face is supported.</p>
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>Entry type. Currently only face is supported.</p>
                     * @param _modelType <p>Entry type. Currently only face is supported.</p>
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取<p>Face similarity, expressed as a string with 4 decimal places, ranging from 0.0000 to 1.0000.</p>
                     * @return FaceScore <p>Face similarity, expressed as a string with 4 decimal places, ranging from 0.0000 to 1.0000.</p>
                     * 
                     */
                    std::string GetFaceScore() const;

                    /**
                     * 设置<p>Face similarity, expressed as a string with 4 decimal places, ranging from 0.0000 to 1.0000.</p>
                     * @param _faceScore <p>Face similarity, expressed as a string with 4 decimal places, ranging from 0.0000 to 1.0000.</p>
                     * 
                     */
                    void SetFaceScore(const std::string& _faceScore);

                    /**
                     * 判断参数 FaceScore 是否已赋值
                     * @return FaceScore 是否已赋值
                     * 
                     */
                    bool FaceScoreHasBeenSet() const;

                    /**
                     * 获取<p>Background similarity</p>
                     * @return BackgroundScore <p>Background similarity</p>
                     * 
                     */
                    std::string GetBackgroundScore() const;

                    /**
                     * 设置<p>Background similarity</p>
                     * @param _backgroundScore <p>Background similarity</p>
                     * 
                     */
                    void SetBackgroundScore(const std::string& _backgroundScore);

                    /**
                     * 判断参数 BackgroundScore 是否已赋值
                     * @return BackgroundScore 是否已赋值
                     * 
                     */
                    bool BackgroundScoreHasBeenSet() const;

                private:

                    /**
                     * <p>Blocklist entry ID, customized by the customer when creating the entry, used to trace which entry is matched.</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>Entry type. Currently only face is supported.</p>
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>Face similarity, expressed as a string with 4 decimal places, ranging from 0.0000 to 1.0000.</p>
                     */
                    std::string m_faceScore;
                    bool m_faceScoreHasBeenSet;

                    /**
                     * <p>Background similarity</p>
                     */
                    std::string m_backgroundScore;
                    bool m_backgroundScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_BLACKLISTITEM_H_

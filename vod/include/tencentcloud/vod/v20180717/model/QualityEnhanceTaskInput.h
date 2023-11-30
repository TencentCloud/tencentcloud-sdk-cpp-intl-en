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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYENHANCETASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYENHANCETASKINPUT_H_

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
                * Input for media quality enhance task.
                */
                class QualityEnhanceTaskInput : public AbstractModel
                {
                public:
                    QualityEnhanceTaskInput();
                    ~QualityEnhanceTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media file ID.
                     * @return FileId Media file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID.
                     * @param _fileId Media file ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Media quality enhance template ID.
                     * @return Definition Media quality enhance template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Media quality enhance template ID.
                     * @param _definition Media quality enhance template ID.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * Media file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Media quality enhance template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYENHANCETASKINPUT_H_

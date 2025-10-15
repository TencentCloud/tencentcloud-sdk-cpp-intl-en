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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODERESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Task code.
                */
                class TaskCodeResult : public AbstractModel
                {
                public:
                    TaskCodeResult();
                    ~TaskCodeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Code content.
                     * @return CodeInfo Code content.
                     * 
                     */
                    std::string GetCodeInfo() const;

                    /**
                     * 设置Code content.
                     * @param _codeInfo Code content.
                     * 
                     */
                    void SetCodeInfo(const std::string& _codeInfo);

                    /**
                     * 判断参数 CodeInfo 是否已赋值
                     * @return CodeInfo 是否已赋值
                     * 
                     */
                    bool CodeInfoHasBeenSet() const;

                    /**
                     * 获取Code file size. unit: KB.
                     * @return CodeFileSize Code file size. unit: KB.
                     * 
                     */
                    std::string GetCodeFileSize() const;

                    /**
                     * 设置Code file size. unit: KB.
                     * @param _codeFileSize Code file size. unit: KB.
                     * 
                     */
                    void SetCodeFileSize(const std::string& _codeFileSize);

                    /**
                     * 判断参数 CodeFileSize 是否已赋值
                     * @return CodeFileSize 是否已赋值
                     * 
                     */
                    bool CodeFileSizeHasBeenSet() const;

                private:

                    /**
                     * Code content.
                     */
                    std::string m_codeInfo;
                    bool m_codeInfoHasBeenSet;

                    /**
                     * Code file size. unit: KB.
                     */
                    std::string m_codeFileSize;
                    bool m_codeFileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TASKCODERESULT_H_

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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSCONFIGURE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSCONFIGURE_H_

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
                * Smart subtitle hotword parameter.
                */
                class AsrHotWordsConfigure : public AbstractModel
                {
                public:
                    AsrHotWordsConfigure();
                    ~AsrHotWordsConfigure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hotword switch.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Switch Hotword switch.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Hotword switch.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _switch Hotword switch.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LibraryId Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _libraryId Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                private:

                    /**
                     * Hotword switch.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Hotword lexicon ID.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASRHOTWORDSCONFIGURE_H_

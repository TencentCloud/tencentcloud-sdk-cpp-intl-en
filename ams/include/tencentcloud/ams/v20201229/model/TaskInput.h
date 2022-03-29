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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_TASKINPUT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_TASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/StorageInfo.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Audio/Video task data structure
                */
                class TaskInput : public AbstractModel
                {
                public:
                    TaskInput();
                    ~TaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取This field is optional and indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     * @return DataId This field is optional and indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置This field is optional and indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     * @param DataId This field is optional and indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取This field is optional and indicates the name of an audio moderation task for subsequent query and management of moderation tasks.
                     * @return Name This field is optional and indicates the name of an audio moderation task for subsequent query and management of moderation tasks.
                     */
                    std::string GetName() const;

                    /**
                     * 设置This field is optional and indicates the name of an audio moderation task for subsequent query and management of moderation tasks.
                     * @param Name This field is optional and indicates the name of an audio moderation task for subsequent query and management of moderation tasks.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取This field is required and indicates the access parameter of the moderated file, which is used to get the moderated media file and contains the access type and address.
                     * @return Input This field is required and indicates the access parameter of the moderated file, which is used to get the moderated media file and contains the access type and address.
                     */
                    StorageInfo GetInput() const;

                    /**
                     * 设置This field is required and indicates the access parameter of the moderated file, which is used to get the moderated media file and contains the access type and address.
                     * @param Input This field is required and indicates the access parameter of the moderated file, which is used to get the moderated media file and contains the access type and address.
                     */
                    void SetInput(const StorageInfo& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * This field is optional and indicates the data ID assigned by you to the object to be detected for easier file identification and management.<br>It **can contain up to 64 letters, digits, and special symbols (_-@#)**.
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * This field is optional and indicates the name of an audio moderation task for subsequent query and management of moderation tasks.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * This field is required and indicates the access parameter of the moderated file, which is used to get the moderated media file and contains the access type and address.
                     */
                    StorageInfo m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_TASKINPUT_H_

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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUDIT_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUDIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Audit information
                */
                class Audit : public AbstractModel
                {
                public:
                    Audit();
                    ~Audit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creator. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Creator Creator. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creator Creator. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Creation Timestamp
                     * @return CreatedAt Creation Timestamp
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation Timestamp
                     * @param _createdAt Creation Timestamp
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Last modifier. Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastModifier Last modifier. Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastModifier() const;

                    /**
                     * 设置Last modifier. Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastModifier Last modifier. Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastModifier(const std::string& _lastModifier);

                    /**
                     * 判断参数 LastModifier 是否已赋值
                     * @return LastModifier 是否已赋值
                     * 
                     */
                    bool LastModifierHasBeenSet() const;

                    /**
                     * 获取Last modification timestamp
                     * @return LastModifiedAt Last modification timestamp
                     * 
                     */
                    std::string GetLastModifiedAt() const;

                    /**
                     * 设置Last modification timestamp
                     * @param _lastModifiedAt Last modification timestamp
                     * 
                     */
                    void SetLastModifiedAt(const std::string& _lastModifiedAt);

                    /**
                     * 判断参数 LastModifiedAt 是否已赋值
                     * @return LastModifiedAt 是否已赋值
                     * 
                     */
                    bool LastModifiedAtHasBeenSet() const;

                    /**
                     * 获取Creator name.
                     * @return CreatorName Creator name.
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置Creator name.
                     * @param _creatorName Creator name.
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取Name of the last modifier
                     * @return LastModifierName Name of the last modifier
                     * 
                     */
                    std::string GetLastModifierName() const;

                    /**
                     * 设置Name of the last modifier
                     * @param _lastModifierName Name of the last modifier
                     * 
                     */
                    void SetLastModifierName(const std::string& _lastModifierName);

                    /**
                     * 判断参数 LastModifierName 是否已赋值
                     * @return LastModifierName 是否已赋值
                     * 
                     */
                    bool LastModifierNameHasBeenSet() const;

                private:

                    /**
                     * Creator. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Creation Timestamp
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Last modifier. Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastModifier;
                    bool m_lastModifierHasBeenSet;

                    /**
                     * Last modification timestamp
                     */
                    std::string m_lastModifiedAt;
                    bool m_lastModifiedAtHasBeenSet;

                    /**
                     * Creator name.
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * Name of the last modifier
                     */
                    std::string m_lastModifierName;
                    bool m_lastModifierNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_AUDIT_H_

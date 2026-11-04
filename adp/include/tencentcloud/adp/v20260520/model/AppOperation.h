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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPOPERATION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * App operation information
                */
                class AppOperation : public AbstractModel
                {
                public:
                    AppOperation();
                    ~AppOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creator
                     * @return Creator Creator
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator
                     * @param _creator Creator
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
                     * 获取Creator UIN
                     * @return CreatorUin Creator UIN
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置Creator UIN
                     * @param _creatorUin Creator UIN
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Creator account (for private scenarios)
                     * @return CreatorUserAccount Creator account (for private scenarios)
                     * 
                     */
                    std::string GetCreatorUserAccount() const;

                    /**
                     * 设置Creator account (for private scenarios)
                     * @param _creatorUserAccount Creator account (for private scenarios)
                     * 
                     */
                    void SetCreatorUserAccount(const std::string& _creatorUserAccount);

                    /**
                     * 判断参数 CreatorUserAccount 是否已赋值
                     * @return CreatorUserAccount 是否已赋值
                     * 
                     */
                    bool CreatorUserAccountHasBeenSet() const;

                    /**
                     * 获取Last modified (Unix timestamp in seconds).
                     * @return UpdateTime Last modified (Unix timestamp in seconds).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modified (Unix timestamp in seconds).
                     * @param _updateTime Last modified (Unix timestamp in seconds).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified by
                     * @return Updater Last modified by
                     * 
                     */
                    std::string GetUpdater() const;

                    /**
                     * 设置Last modified by
                     * @param _updater Last modified by
                     * 
                     */
                    void SetUpdater(const std::string& _updater);

                    /**
                     * 判断参数 Updater 是否已赋值
                     * @return Updater 是否已赋值
                     * 
                     */
                    bool UpdaterHasBeenSet() const;

                    /**
                     * 获取Modifier UIN
                     * @return UpdaterUin Modifier UIN
                     * 
                     */
                    std::string GetUpdaterUin() const;

                    /**
                     * 设置Modifier UIN
                     * @param _updaterUin Modifier UIN
                     * 
                     */
                    void SetUpdaterUin(const std::string& _updaterUin);

                    /**
                     * 判断参数 UpdaterUin 是否已赋值
                     * @return UpdaterUin 是否已赋值
                     * 
                     */
                    bool UpdaterUinHasBeenSet() const;

                private:

                    /**
                     * Creator
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Creator UIN
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Creator account (for private scenarios)
                     */
                    std::string m_creatorUserAccount;
                    bool m_creatorUserAccountHasBeenSet;

                    /**
                     * Last modified (Unix timestamp in seconds).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Last modified by
                     */
                    std::string m_updater;
                    bool m_updaterHasBeenSet;

                    /**
                     * Modifier UIN
                     */
                    std::string m_updaterUin;
                    bool m_updaterUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPOPERATION_H_

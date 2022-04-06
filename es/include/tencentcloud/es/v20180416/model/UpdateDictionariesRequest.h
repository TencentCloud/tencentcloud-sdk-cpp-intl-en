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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDICTIONARIESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDICTIONARIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateDictionaries request structure.
                */
                class UpdateDictionariesRequest : public AbstractModel
                {
                public:
                    UpdateDictionariesRequest();
                    ~UpdateDictionariesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES instance ID
                     * @return InstanceId ES instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES instance ID
                     * @param InstanceId ES instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取COS address of the main dictionary for the IK analyzer
                     * @return IkMainDicts COS address of the main dictionary for the IK analyzer
                     */
                    std::vector<std::string> GetIkMainDicts() const;

                    /**
                     * 设置COS address of the main dictionary for the IK analyzer
                     * @param IkMainDicts COS address of the main dictionary for the IK analyzer
                     */
                    void SetIkMainDicts(const std::vector<std::string>& _ikMainDicts);

                    /**
                     * 判断参数 IkMainDicts 是否已赋值
                     * @return IkMainDicts 是否已赋值
                     */
                    bool IkMainDictsHasBeenSet() const;

                    /**
                     * 获取COS address of the stopword dictionary for the IK analyzer
                     * @return IkStopwords COS address of the stopword dictionary for the IK analyzer
                     */
                    std::vector<std::string> GetIkStopwords() const;

                    /**
                     * 设置COS address of the stopword dictionary for the IK analyzer
                     * @param IkStopwords COS address of the stopword dictionary for the IK analyzer
                     */
                    void SetIkStopwords(const std::vector<std::string>& _ikStopwords);

                    /**
                     * 判断参数 IkStopwords 是否已赋值
                     * @return IkStopwords 是否已赋值
                     */
                    bool IkStopwordsHasBeenSet() const;

                    /**
                     * 获取COS address of the synonym dictionary
                     * @return Synonym COS address of the synonym dictionary
                     */
                    std::vector<std::string> GetSynonym() const;

                    /**
                     * 设置COS address of the synonym dictionary
                     * @param Synonym COS address of the synonym dictionary
                     */
                    void SetSynonym(const std::vector<std::string>& _synonym);

                    /**
                     * 判断参数 Synonym 是否已赋值
                     * @return Synonym 是否已赋值
                     */
                    bool SynonymHasBeenSet() const;

                    /**
                     * 获取COS address of the QQ dictionary
                     * @return QQDict COS address of the QQ dictionary
                     */
                    std::vector<std::string> GetQQDict() const;

                    /**
                     * 设置COS address of the QQ dictionary
                     * @param QQDict COS address of the QQ dictionary
                     */
                    void SetQQDict(const std::vector<std::string>& _qQDict);

                    /**
                     * 判断参数 QQDict 是否已赋值
                     * @return QQDict 是否已赋值
                     */
                    bool QQDictHasBeenSet() const;

                    /**
                     * 获取0: Install; 1: Delete
                     * @return UpdateType 0: Install; 1: Delete
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置0: Install; 1: Delete
                     * @param UpdateType 0: Install; 1: Delete
                     */
                    void SetUpdateType(const int64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取Whether to force restart the cluster
                     * @return ForceRestart Whether to force restart the cluster
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置Whether to force restart the cluster
                     * @param ForceRestart Whether to force restart the cluster
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     */
                    bool ForceRestartHasBeenSet() const;

                private:

                    /**
                     * ES instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * COS address of the main dictionary for the IK analyzer
                     */
                    std::vector<std::string> m_ikMainDicts;
                    bool m_ikMainDictsHasBeenSet;

                    /**
                     * COS address of the stopword dictionary for the IK analyzer
                     */
                    std::vector<std::string> m_ikStopwords;
                    bool m_ikStopwordsHasBeenSet;

                    /**
                     * COS address of the synonym dictionary
                     */
                    std::vector<std::string> m_synonym;
                    bool m_synonymHasBeenSet;

                    /**
                     * COS address of the QQ dictionary
                     */
                    std::vector<std::string> m_qQDict;
                    bool m_qQDictHasBeenSet;

                    /**
                     * 0: Install; 1: Delete
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * Whether to force restart the cluster
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDICTIONARIESREQUEST_H_

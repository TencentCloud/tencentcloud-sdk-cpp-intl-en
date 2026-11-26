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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREPLICA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREPLICA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Replica of an edge function.
                */
                class FunctionReplica : public AbstractModel
                {
                public:
                    FunctionReplica();
                    ~FunctionReplica() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Function ID.
                     * @return FunctionId Function ID.
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置Function ID.
                     * @param _functionId Function ID.
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取Name of the edge function copy.
                     * @return ReplicaName Name of the edge function copy.
                     * 
                     */
                    std::string GetReplicaName() const;

                    /**
                     * 设置Name of the edge function copy.
                     * @param _replicaName Name of the edge function copy.
                     * 
                     */
                    void SetReplicaName(const std::string& _replicaName);

                    /**
                     * 判断参数 ReplicaName 是否已赋值
                     * @return ReplicaName 是否已赋值
                     * 
                     */
                    bool ReplicaNameHasBeenSet() const;

                    /**
                     * 获取Content of the edge function copy. Format: JavaScript code.
                     * @return Content Content of the edge function copy. Format: JavaScript code.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content of the edge function copy. Format: JavaScript code.
                     * @param _content Content of the edge function copy. Format: JavaScript code.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Description of the edge function replica.
                     * @return Remark Description of the edge function replica.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Description of the edge function replica.
                     * @param _remark Description of the edge function replica.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Creation time of the edge function replica.
                     * @return CreatedOn Creation time of the edge function replica.
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置Creation time of the edge function replica.
                     * @param _createdOn Creation time of the edge function replica.
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取Last update time of the edge function replica.
                     * @return ModifiedOn Last update time of the edge function replica.
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置Last update time of the edge function replica.
                     * @param _modifiedOn Last update time of the edge function replica.
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * Function ID.
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * Name of the edge function copy.
                     */
                    std::string m_replicaName;
                    bool m_replicaNameHasBeenSet;

                    /**
                     * Content of the edge function copy. Format: JavaScript code.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Description of the edge function replica.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time of the edge function replica.
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * Last update time of the edge function replica.
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONREPLICA_H_

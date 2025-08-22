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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_OUTPUTSTORAGE_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_OUTPUTSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/CosOutputStorage.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * VOD remux task Output Storage.
                */
                class OutputStorage : public AbstractModel
                {
                public:
                    OutputStorage();
                    ~OutputStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VOD remux task output storage type. Only support COS type.
                     * @return Type VOD remux task output storage type. Only support COS type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置VOD remux task output storage type. Only support COS type.
                     * @param _type VOD remux task output storage type. Only support COS type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取cos output storage information.
                     * @return CosOutputStorage cos output storage information.
                     * 
                     */
                    CosOutputStorage GetCosOutputStorage() const;

                    /**
                     * 设置cos output storage information.
                     * @param _cosOutputStorage cos output storage information.
                     * 
                     */
                    void SetCosOutputStorage(const CosOutputStorage& _cosOutputStorage);

                    /**
                     * 判断参数 CosOutputStorage 是否已赋值
                     * @return CosOutputStorage 是否已赋值
                     * 
                     */
                    bool CosOutputStorageHasBeenSet() const;

                private:

                    /**
                     * VOD remux task output storage type. Only support COS type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * cos output storage information.
                     */
                    CosOutputStorage m_cosOutputStorage;
                    bool m_cosOutputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_OUTPUTSTORAGE_H_

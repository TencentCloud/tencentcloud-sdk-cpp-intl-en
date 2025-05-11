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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_STORAGEBLOCK_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_STORAGEBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information on local HDD storage.
                */
                class StorageBlock : public AbstractModel
                {
                public:
                    StorageBlock();
                    ~StorageBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HDD LOCAL storage type specifies the value: LOCAL_PRO.
                     * @return Type HDD LOCAL storage type specifies the value: LOCAL_PRO.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置HDD LOCAL storage type specifies the value: LOCAL_PRO.
                     * @param _type HDD LOCAL storage type specifies the value: LOCAL_PRO.
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
                     * 获取Specifies the minimum HDD local storage capacity. measurement unit: GiB.
                     * @return MinSize Specifies the minimum HDD local storage capacity. measurement unit: GiB.
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置Specifies the minimum HDD local storage capacity. measurement unit: GiB.
                     * @param _minSize Specifies the minimum HDD local storage capacity. measurement unit: GiB.
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum capacity of HDD local storage. measurement unit: GiB.
                     * @return MaxSize Specifies the maximum capacity of HDD local storage. measurement unit: GiB.
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Specifies the maximum capacity of HDD local storage. measurement unit: GiB.
                     * @param _maxSize Specifies the maximum capacity of HDD local storage. measurement unit: GiB.
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * HDD LOCAL storage type specifies the value: LOCAL_PRO.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the minimum HDD local storage capacity. measurement unit: GiB.
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Specifies the maximum capacity of HDD local storage. measurement unit: GiB.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_STORAGEBLOCK_H_
